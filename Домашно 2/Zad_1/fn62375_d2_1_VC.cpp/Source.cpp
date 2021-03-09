/**
*
* Solution to homework assignment 2
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
bool triangular(unsigned int elements[], int &lenght)
{
	bool check=false;
		int middle = (lenght / 2)-1;
		for (int i = 0; i < middle; i++)
		{
			int sumStart = 0;
			int sumEnd = 0;
			if (elements[i] - elements[i + 1] < 0)
			{
				sumStart = (elements[i] - elements[i + 1]) * (-1);
			}
			if (elements[lenght - i - 1] - elements[lenght - i - 2] < 0)
			{
				sumEnd = elements[lenght - i - 1] - elements[lenght - i - 2] * (-1);
			}
			if (sumStart==sumEnd)
			{
				check = true;
			}
			else 
			{
				check = false;
				break;
			}
		}
	return check;
}
/*int SafelyInputInteger(int lowerBound, int upperBound) {
	long num;
	while (true) {
		cout << "Enter a number between "<< lowerBound << " and " << upperBound <<": ";
		cin >> num;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if ((num > lowerBound) && (num < upperBound)) break;
	}
	return num;
}*/
int main()
{
	bool flag = 0;
	int n;
	cin >> n;
	if (n < 3 || n>100)
	{
		cout << "invalid target!!!";
	}
	else {
		unsigned int a[101];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] <= 0)
			{
				flag = false;
				break;
			}
			else {
				flag = true;
			}
		}
		if (flag == true)
		{
			cout << triangular(a, n) << '\n';
		}
		else {
				cout << "Have a number <=0!!!";
		}
		return 0;
	}
}