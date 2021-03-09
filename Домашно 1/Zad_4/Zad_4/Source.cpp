/**
*
* Solution to homework assignment 1
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
int main()
{
	int n;
	int number,x,y,z;
	int helper_sum =0, sum = INT_MAX;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i+1; j <= n/i; j++)
		{
			if (n % (i * j) == 0)
			{
				number = n /( i * j);
				helper_sum = number + i + j;
				if (helper_sum < sum)
				{
					sum = helper_sum;
					x = number;
					y = i;
					z = j;
				}
			}
		}
	}
	cout <<x<<" "<<y<<" "<<z<<" "<<'\n';
			return 0;
}

/*int min = INT_MAX;
int minM, minP, minQ;*/
/*
void rec(int a[], bool used[], int m, int p, int q,int n)
{

	bool flag = false;

	for (int i = 0; i < n; i++)
	{
		if (used[i] == false)
		{
			flag = true;
		}
	}

	if (flag == false)
	{
		if (min > m + p + q)
		{
			min = m + p + q;
			minM = m;
			minP = p;
			minQ = q;
		}
		return;
	}
	
	for(int i=0;i<n;i++)
	{
		if (used[i] == 0)
		{
			used[i] = 1;
			rec(a, used, m * a[i], p, q, n);
			rec(a, used, m, p * a[i], q, n);
			rec(a, used, m, p, q * a[i], n);
			used[i] = 0;
		}
	}
	
	return;
}
int main()
{
	bool used[64];
	int n;
	int a[64];
	int index = 0;
	int m = 1, p = 1, q = 1;

	cin >> n;

	while (n != 0)
	{
		for (int i = 2; i <= n ; i++)
		{
			if (n % i == 0) 
			{
				a[index] = i;
				index++; 
				break;
			}
		}
		n /= a[index - 1];
	}

	for (int i = 0; i < index; i++)
	{
		used[i] = false;
	}

	rec(a, used, m, p, q, index);
	cout << minM << " " << minP << " " << minQ <<'\n';
}*/