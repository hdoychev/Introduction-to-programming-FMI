/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Hristo Doychev
* @idnumber 62375
* @task 5
* @compiler VC
*
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N=0,br=0;
	bool flag = false;
	cin >> N;
	const double e = 0.000000000000000;
	const double helper = 1.0000000000000000;
	double sum = (1 /(double)N);

	if (helper-((double)sum*(double)N)==e)			//if(fabs(helper-(double)sum*(double)N)<e)
	{	
		while (sum!= (int)sum)
		{
			sum=sum*10;
			br++;
			if (br > 10000000)					//ot tuka do |
			{											   //V	
				flag = true;
				cout << "NO"; break;
			}
		}
		if (flag == false)
		{
		cout << br << '\n';
		}				//TUKA ne trqbva da go ima no inache ne vyrvi a logikata e vqrna 
		//cout << br;		//Tva gornoto se maha i se slaga tova no nz zashto vliza kogato e 1.00000003 i stava bezkraen cikul 	
	}
	else
	{
		cout<<"NO"<< '\n';
	}	

return 0;
}