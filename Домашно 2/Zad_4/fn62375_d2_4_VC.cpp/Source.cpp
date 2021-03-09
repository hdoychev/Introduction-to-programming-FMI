/**
*
* Solution to homework assignment 2
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
	cin >> n;
	if (n < 3 || n>100)
	{
		cout << "invalid input!!!" << '\n';
	}
	else
	{
		bool flag = false;
		int a[1000];
		int el;
		int input_br=0;
		int br = 0;
		while(input_br<n)
		{
			el = 0;
			cin >> el;
			flag = false;
			for (int j = 0; j < input_br + 1; j++)
			{
				if (a[j] == el)
				{
					flag = true;
				}
			}
			if (flag == false)
			{
				a[input_br] = el;
				input_br++;
			}
		}
		for (int i = 0; i <n-2; i++)
		{
			for (int j = i + 1; j < n- 1; j++)
			{
				for (int k = j + 1; k < n; k++)
				{
					if (a[i] + a[j] + a[k] == 0)
					{
						br++;
					}
				}
			}
		}
		cout << br<<'\n';
	}
	return 0;
}