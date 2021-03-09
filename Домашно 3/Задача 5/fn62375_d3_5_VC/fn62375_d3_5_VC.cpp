/*
*
* Solution to homework assignment 3
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
#include <fstream>
using namespace std;
const int Size_alphabet = 52;
const int MAX_SIZE = 150;
bool InvalidInput = false;
int Size(char a[])
{
	int size = 0;
	while (a[size] != '\0')
	{
		size++;
	}
	return size;
}
char Decryption(char a[])
{
	int count[Size_alphabet] = { 0 };
	int size = Size(a);
	for (int i = 0; i < size; i++)
	{
		if ((int)a[i] > 64 && (int)a[i] < 91)
		{
			count[(int)(a[i] - 64)]+= 1;
		}
		else if ((int)a[i] > 96 && (int)a[i] <123)
		{
			count[(int)(a[i] - 70)]+= 1;
		}
		else
		{
			InvalidInput = true;
		}
	}
	bool flag = false;
	bool AllIsFull = true;
	char ans='\0';
	for (int i = 0; i < Size_alphabet; i++)
	{
		if (count[i]!= 0 && flag== false)
		{
			flag = true;
		}
		else if (count[i] == 0 && flag == true)
		{
			AllIsFull = false;
			if (i <= 26)
			{
				ans = (char)(i + 64);
				break;
			}
			else {
				ans = (char)(i + 70);
				break;
			}
			
		}
	}
	if (InvalidInput == true)
	{
		cout << -2;
		return '\0';
	}
	else if (AllIsFull == false)
	{
		return ans;
	}
	else {
		return '.';
	}
}
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!Funkciqta raboti BEZPOGRESHNO, ako iskash q probvai s tova koeto e v komentar !!!!!!!!!!!!!!!!
prosto ne uspqh da svurja s faila s funkciqta mislq che vqrno q svurzvam no moje da byrkam neshto malko!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
int main()
{//PROCHETI TOVA  ^
 //               |     
	char* line = new char[150];
	fstream textFile("D:\message.txt",fstream::in);
	if (textFile.is_open()) {
		
	textFile.seekp(0);
		while (textFile.get(line, 150, '\n')) {
			textFile.ignore(875, '\n');
			textFile.clear();
			cout << Decryption(line)<< "\n";
		}

		textFile.close();
	}
	else 
	{
			cout << -2 << "\n";
	}
	delete[] line;
	/*char arr[150];
	cin.getline(arr, 150);
	cout << Decryption(arr);*/
	return 0;
}
