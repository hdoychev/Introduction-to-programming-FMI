/**
*
* Solution to homework assignment 1
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
#include<climits>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int br = 0;
	int min=INT_MAX;
	int min_2 =INT_MAX;
	if ((a == b&&a== c&&b==c))
	{
		cout << a << b << c<<'\n';
		br = 3;
	}
	else if (((a == b) ||(a ==c)||(b==c)&&(a!=0&&b!=0&&c!=0)))
	{
		if (a == b)
		{
			cout << a << c << b << '\n';
		}
		else if (a == c)
		{
			cout << a << b << c << '\n';
		}
		else
		{
			cout << b << a << c << '\n';
		}
	}
	else if ((a == b) || (a == c) || (b == c) && ((a!= 0 &&b != 0&&c == 0)|| (a != 0 && b == 0 && c != 0)|| (a == 0 && b != 0 && c != 0)||((a != 0 && b == 0 && c == 0) || (a == 0 && b == 0 && c != 0) || (a == 0 && b != 0 && c == 0))))
	{
		if (a == b && a != 0)
		{
			cout << a << c << b << '\n';
		}
		else if (a == c && a != 0)
		{
			cout << a << b << c << '\n';
		}
		else if(b==c&&b!=0)
		{
			cout << b << a << c << '\n';
		}
		else if (a == b && a == 0)
		{
			cout <<c<< a << b << c << '\n';
		}
		else if (a == c && a == 0)
		{
			cout <<b<< a << c << b << '\n';
		}
		else
		{
			cout<<a<< b << c << a << '\n';
		}
	
	}
	else if( ((a == b) || (a == c) || (b == c)) && ((a == 0 && b == 0 )||(a==0&&c == 0)||(b==0&&c==0)))
	{
		if (a == b && a == 0)
		{
			cout << c << a << b << c<<'\n';
		}
		if (a == c && a == 0)
		{
			cout << b << a << c << b << '\n';
		}
		else {
			cout << a << b << c << a << '\n';
		}
	}
	else if ((a != b && a != c && b != c) && ((a != 0 && b != 0 && c == 0) || (a != 0 && b == 0 && c != 0) || (a == 0 && b != 0 && c != 0)))
	{
		if (a > b&& a > c)
		{
			if (b > c)
			{
				cout << b << c << a << c << b << '\n';
			}
			else {
				cout << c<< b << a << b<< c << '\n';
			}
		}
		else if (b> a&& b > c)
		{
			if (a> c)
			{
				cout << a << c << b << c << a << '\n';
			}
			else {
				cout << c << a << b << a << c << '\n';
			}
		}
		else {
			if (a > b)
			{
				cout << a << b << c << b << a << '\n';
			}
			else {
				cout << b << a << c << a << b << '\n';
			}
		}
	}
	else if (a > b && a > c)
	{
		if ((b > c)&&(c>0))
		{
			cout << c << b <<a<< b << c << '\n';
		}
		else if(c>b&&b>0)
		{

			cout << b << c <<a<< c << b<<'\n';
		}
	

	}
	else if (b > a && b > c)
	{
		if (a > c&&(c!=0))
		{
			cout << c << a << b << a << c << '\n';
		}
		else
		{
			cout << a << c << b << c << a << '\n';
		}
	}
	 else if (c > b && c > a)
	{
		if (a > b&&(b!=0))
		{
			cout << b << a << c << a << b << '\n';
		}
		else
		{
			cout << a << b << c << b << a << '\n';
		}

	}
	 else if (a==0&&b==0&&c==0)
	 {
	 cout << "Nekorektno" << '\n';
	}
	 else if((a==0&&b==0&&c!=0)|| (a != 0 && b == 0 && c == 0)|| (a == 0 && b != 0 && c == 0)){
	 if (a == c)
	 {
		 cout << b << a << c << b<<'\n';
	 }
	 else if (a == b)
	 {
		 cout << c << a << b << c << '\n';
	 }
	 else if(b==c) {
		 cout << a << b << c << a << '\n';
	 }
}
	 
 
	return 0;
}