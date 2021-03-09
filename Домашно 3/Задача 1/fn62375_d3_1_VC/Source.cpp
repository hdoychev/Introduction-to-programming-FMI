/*
*
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Hristo Doychev
* @idnumber 62375
* @task 1
* @compiler VC
*
*/
#include<iostream>
using namespace std;
int Size(char a[])
{
	int size = 0;
	while (a[size] != '\0')
	{
		size++;
	}
	return size;
}
bool ValidWord(char a[])
{
	int size = Size(a);
	int ascii[128] = {0};
	int count=0;
	for (int i = 0; i < size; i++)
	{
		ascii[(int)a[i]]= ascii[(int)a[i]]+1;
	}
	for (int i = 0; i < 128; i++)
	{
		if (ascii[i] % 2 == 1)
		{
			count++;
		}
	}
	if (count <= 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char a[150];
	cin.getline(a, 150);
	cout << ValidWord(a);
	return 0;
}