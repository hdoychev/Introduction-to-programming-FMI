#include"izpit.h"
#include<iostream>
using namespace std;
int main()
{
	//char arr[] = "l u";
	//cout << revandreplace(arr);
	/*char arr[] = "g";
	cout << CheckDate(arr);*/
	int arr1[5] = { 3,5,11,2,9 };
	int arr2[5] = { 1,4,32,71,5 };
	cout << counterletters(arr1, arr2, 5)[0] << ' ' << counterletters(arr1, arr2, 5)[1];
	return 0;
}