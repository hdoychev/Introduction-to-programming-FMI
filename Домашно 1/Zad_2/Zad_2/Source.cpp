#include<iostream>
#include<algorithm>
using namespace std;
/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Hristo Doychev
* @idnumber 62375
* @task 2
* @compiler VC
*
*/

int main()
{
	int arr1,arr2;
	int Max = 0,Max_second=0,i=0;
	bool positive = false;
	while (true)
	{
		cin >> arr1;
		i++;
		if (arr1 <= 0)
		{
			if (i < 2)
			{
			positive = true;
			break;
			}
			break;
		}
		else  if(arr1 > Max)
		{
			Max_second=Max;
			Max = arr1;
		}
		cin >> arr2;
		i++;
		if (arr2 <= 0)
		{
			if (i < 2)
			{
				positive = true;
				break;
			}
			break;
		}
		else  if (arr2 > Max)
		{
			Max_second = Max;
			Max = arr2;
		}
	}
	if (positive ==true)
	{
		cout << "Prekaleno malko cisla edno ot koito otricatelno"<<'\n';
	}
	else
	{
		cout << "Vtoroto po-golemina e: " << Max_second << '\n';
	}
	
	return 0;
}