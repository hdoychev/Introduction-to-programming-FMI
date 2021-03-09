//Hristo Doychev 62375
#include<iostream>
using namespace std;
bool Valid(int& n)
{
int arr[50];
int i = 0;
while (n != 0)
{
	arr[i] = n % 10;
	n /= 10;
	i++;
}
for (int j = 0; j < i-1; j++)
{
	for (int k = j+1; k < i; k++)
	{
		if (arr[j] == arr[k])
		{
			return true;
		}
	}
}
return false;
}
int main()
{
	int n;
	cin >> n;
	cout << Valid(n);
	return 0;
}