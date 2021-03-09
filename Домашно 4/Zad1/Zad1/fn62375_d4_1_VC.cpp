/**
*
* Solution to homework assignment 4
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
void S(int arr[], int position)
{
	if (arr[position - 1] < arr[position] - 1)
	{
		arr[position] = arr[position + 1] - 1;
	}
	else
	{
		arr[position] = arr[position + 1];
	}
}
bool F(int arr[], int m, int n)
{
	int br = 0;
	for (int i = 0; i < m; i++)
	{
		if (i == 0 && arr[i] > arr[i + 1])
		{
			arr[i] = 1;
			br++;
			if (br > n)
			{
				return false;
			}
		}
		if (i == m - 3 && arr[i] > arr[i + 1] && arr[i] > arr[i + 2])
		{
			arr[i + 1] = arr[i] + 1;
			arr[i + 2] = arr[i + 1] + 1;
			br += 2;
			if (br > n)
			{
				return false;
			}
		}
		if (i > 0 && arr[i] > arr[i + 1]&&i<m-1)
		{
			S(arr, i);
			br++;
			if (br > n)
			{
				return false;
			}
		}
		if (i == m - 1 && arr[i] < arr[i - 1])
		{
			arr[i] = arr[i - 1] + 1;
			br++;
			if (br > n)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int n;
	int m;
	cout << "\t Broi smeni \n ";
	cin >> n;
	if (n < 0)
	{
		return -1;
	}
	cout << "\n \t broi chisla: \n";
	cin >> m;
	if (m < 0)
	{
		return -1;
	}
	int arr[1000];
	cout << "\n \t Vuvedi chislata(po-golemi ot 0): \n";
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		if (arr[i] <= 0)
		{
			return -1;
		}
	}
	cout << "Answer: ";
	cout << F(arr, m, n)<<'\n';
	return 0;
}