/**
*
* Solution to homework assignment 4
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
const int UPPER_BOUND = 1000000000;
const int LOWER_BOUND =-1000000000;
struct ND {
	long long num;
	long long den;
};
ND Delene(ND x)
{
	if (x.num % 2 == 0 && x.den % 2 == 0&&x.num!=0&&x.den!=0)
	{
		x.num = x.num / 2;
		x.den = x.den / 2;
		return Delene(x);
	}
	else if(x.num % 3 == 0 && x.den % 3 == 0 && x.num != 0 && x.den != 0)
	{
		x.num = x.num / 3;
		x.den = x.den / 3;
		return Delene(x);
	}
	else if (x.num % 5 == 0 && x.den % 5 == 0 && x.num != 0 && x.den != 0)
	{
		x.num = x.num / 5;
		x.den = x.den / 5;
		return Delene(x);
	}
	else if (x.den % x.num == 0 && x.num != 0 && x.den != 0)
	{
		x.den = x.den / x.num;
		x.num = x.num / x.num;
		return x;
	}
	else if (x.den == 0)
	{
		cout << "Denominator is 0 ==>Invalid answer";
	}
	else {
		return x;
	}
}
ND Sum(long long numerator1, long long denominator1, char sign, long long numerator2,long long denominator2)
{
	ND x;
	if (sign == '+')
	{
		x.den = denominator1 * denominator2;
		numerator1 = numerator1 * denominator2;
		numerator2 = numerator2 * denominator1;
		x.num = numerator1 + numerator2;
		if (x.num == 0)
		{
			x.num = 0;
			x.den = 1;
		}
		else
		{
				x=Delene(x);
		}
		return x;
	}
	else if (sign == '-')
	{
		x.den = denominator1 * denominator2;
		numerator1 = numerator1 * denominator2;
		numerator2 = numerator2 * denominator1;
		x.num= numerator1 - numerator2;
		if (x.num == 0)
		{
			x.num = 0;
			x.den = 1;
		}
		else
		{
			x = Delene(x);
		}
		return x;
	}
	else if (sign == '*')
	{
		x.den = denominator1 * denominator2;
		x.num = numerator1 * numerator2;
		if (x.num == 0)
		{
			x.num = 0;
			x.den = 1;
		}
		else
		{
			x = Delene(x);
		}
		return x;
	}
	else if (sign == '/')
	{
		x.num = numerator1 * denominator2;
		x.den= denominator1 * numerator2;
		if (x.num == 0)
		{
			x.num = 0;
			x.den = 1;
		}
		else
		{
			x = Delene(x);
		}
		return x;
	}
	else
	{
		cout << -1 << '\n';
	}
}
int main()
{
	long long numerator1 = 0, numerator2 = 0, denominator1 = 0, denominator2 = 0;
	char sign = '/0';
	cout << "First numerator: \n \t";
	cin >> numerator1;
	cout << "First denominator: \n \t";
	cin >> denominator1;
	if (numerator1 > UPPER_BOUND || numerator1<LOWER_BOUND || denominator1>UPPER_BOUND || denominator1 < LOWER_BOUND)
	{
		return -1;
	}
	cout << "\n ";
	cout << "Sign:   ";
	cin >> sign;
	if (!(sign == '/' || sign == '*' || sign == '-' || sign == '+'))
	{
		return -1;
	}
	cout << "\n  ";
	cout << "Second numerator: \n \t";
	cin >> numerator2;
	cout << "Second denominator: \n \t";
	cin >> denominator2;
	if (numerator2 > UPPER_BOUND || numerator2<LOWER_BOUND || denominator2>UPPER_BOUND || denominator2 < LOWER_BOUND)
	{
		return -1;
	}
	ND y;
	y.num = 0; y.den = 0;
	y=Sum(numerator1, denominator1, sign, numerator2, denominator2);
	cout << y.num<<" "<<y.den;
	return 0;
}