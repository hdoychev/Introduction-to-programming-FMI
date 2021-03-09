/*
*
* Solution to homework assignment 3
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
const int MAX_SIZE = 1000;
bool ValidMagicSquare(int &n, double** a)
{
	bool flag = true;
	double sum=0.0;
	double savesum = sum;
	int i = 0,j=0;
	//redove
	for (i = 0; i < n; i++)
	{
		j = 0;
		sum = 0;
		while (j < n)
		{
			sum= sum + a[i][j];
			j++;
		}
		
	if (i == 0) 
	{
		savesum = sum;
	}

	if (savesum != sum)
	 {
				flag = false;
				break;
	 }
	}
	if (flag == false)
	{
		return false;
	}
	//koloni
	for (j = 0; j < n; j++)
	{
		i = 0;
		sum = 0;
		while (i < n)
		{
			sum= sum + a[i][j];
			i++;
		}
		if (savesum != sum)
		{
			flag = false;
			break;
		}
	}
	if (flag == false)
	{
		return false;
	}
	//purvi diagonal
	sum = 0;
	for (i = 0; i < n; i++)
	{
		j = i;
		sum = sum + a[i][j];	
	}
	if (savesum != sum)
	{
		flag = false;
	}
	if (flag == false)
	{
		return false;
	}
	//Vroti diagonal
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + a[i][ n - i - 1];	
	}
	if (savesum != sum)
	{
		flag = false;
	}
	if (flag == false)
	{
		return false;
	}
	//izhod
	else 
	{
		return true;
	}
}
int main()
{
	int n;
	double** a = new double*[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i++) {
		a[i] = new double[MAX_SIZE];
	}

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << ValidMagicSquare(n,a);

	for (int i = 0; i < MAX_SIZE; i++) {
		delete[] a[i];
	}
	delete[] a;
	return 0;
}