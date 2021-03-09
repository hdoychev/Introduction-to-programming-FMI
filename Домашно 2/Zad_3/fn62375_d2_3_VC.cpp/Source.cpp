/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Hristo Doychev
* @idnumber 62375
* @task 3
* @compiler VC
*
*/
#include<iostream>
using namespace std;
bool palendrom(int current[],int length)
{
	int index = 0;
	while (index <= length/ 2)
	{
		if (current[index] == current[length - index - 1])
		{
			index++;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int BR(int a[],unsigned int lenght)
{
	int br(0);
	for (int i = 0; i < lenght - 2; i++)
	{
		int currentArr[1000] = {0};
		int currentArrLength(2);
		currentArr[0] = a[i]; 
		currentArr[1] = a[i + 1];

		for (int j = 2 + i; j < lenght; j++)
		{
			currentArr[j-i] = a[j];
			currentArrLength++;
			if (palendrom(currentArr,currentArrLength) == true)
			{
				br++;
			}
		}
	}
	if (br == 0)
	{
		return -1;
	}
	else
	{
		return br;
	}
}
int main()
{
	unsigned int n;
	cin >> n;
	if (n < 3 || n>1000)
	{
		cout << "Invalid target!!! \n";
	}
	else
	{
		 int a[1000];
		 bool check=true;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] < 0)
			{
				cout << "invalid input";
				check = false;
				break;
			}
		}
		if (check == false)
		{
			cout << "Invalid input have (-)number" << '\n';
		}
		else
		{
			cout<<BR(a, n);
		}
	}
	return 0;
}