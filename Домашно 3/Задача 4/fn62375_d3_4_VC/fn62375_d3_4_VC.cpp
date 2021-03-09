/*
*
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Hristo Doychev
* @idnumber 62375
* @task 4
* @compiler VC
*
*/
#include<iostream>
using namespace std;
int Size(char a[])
{
	int size=0;
	while (a[size] != '\0')
	{
		size++;
	}
	return size;
}
void For(int count[], int& br, int& el, char a[], int& size)
{
	int sum = 0;
	for (int i = 0; i < size; i += el)
	{
		sum += (int)(a[i] - 96);
		count[br] = sum; br++;
		sum *= 10;
	}
}

int AllVaration(char a[])
{
	int count[10000] = {0};
	int br = 0;
	int sum = 0;
	int result = 0;
	int size = Size(a);
	int i=0;
	//edinichni
	while (a[i] != '\0')
	{
		count[br] = (int)(a[i] - 96);
		br++; 
		i++;
	}
	//vsichki posledovatelno
	for (int i = 0; i < size - 1; i++)
	{
		sum = 0;
		sum = (int)(a[i] - 96);
		sum *= 10;
		for (int j = i + 1; j < size; j++)
		{
			sum = sum + (int)(a[j] - 96);
			count[br] = sum; br++;
			sum *= 10;
		}
	}
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			sum = 0;
			sum+= (int)(a[i] - 96);
			sum *= 10;
			sum += (int)(a[j] - 96);
			count[br] = sum; br++;
		}
	}
	for (int i = 0; i < size - 1; i++)
	{
		sum = 0;
		sum += (int)(a[i] - 96);
		sum *= 10;
		for (int j = i+2; j < size; j++)
		{
			sum += (int)(a[j] - 96);
			count[br] = sum; br++;
			sum *= 10;
		}
	}
	for (int i = 0; i < size-1; i++)
	{
		sum = 0;
		for (int j = 0; j < size; j++)
		{
			if (i != j)
			{
				sum += (int)(a[j] - 96);
				count[br] = sum; br++;
				sum *= 10;
			}
		}
	}
	int el = 1;
	while (el != size)
	{
		For(count, br, el, a, size);
		el++;
	}
	for (int i = 0; i < br; i++)
	{
		for (int j = i + 1; j < br; j++)
		{
			if (count[i] == count[j])
			{
				count[j] = 0;
			}
		}
	}
	for (int i = 0; i < br; i++)
	{
		if (count[i] != 0)
		{
			result++;
		}
	}
	return result;
}
int main()
{
	char input[100];
	bool flag = true;
	cout << "Input only litle letters \n";
	cin.getline(input, 100);
	cout << AllVaration(input);
	return 0;
}