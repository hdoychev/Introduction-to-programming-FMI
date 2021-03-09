#pragma once
#include<iostream>
using namespace std;
/*1.Да се напише функция на C++, която приема като параметър два едномерни сортирани целочислени масива с елементи от тип int и връща като резултат трети масив
(който съдържа всички елементи на двата масива и само тях), който също е сортиран. Предполага се,
че входните масиви са сортирани преди да се извика написаната от вас функция.*/
void SortArray(int* arr1, int* arr2,int n)
{
	
	int* array=new int[2*n];
	int br = 0;
	for (int i = 0; i < n; i++)
	{
		array[br] = arr1[i];
		++br;
		array[br] = arr2[i];
		++br;
	}
	for (int i = 0; i < br - 1; i++)
	{
		for (int j =i+1; j < br; j++)
		{
			if (array[i] > array[j])
			{
				int swap = array[i];
				array[i] = array[j];
				array[j] = swap;
			}
		}
	}
	//int i = 0, j = 0,br=0;
	//while (i!=n-1 && j!=n-1)
	//{
	//	if (arr1[i] < arr2[j])
	//	{
	//		array[br] = arr1[i];
	//		br++;
	//		i++;
	//	}
	//	else
	//	{
	//		array[br] = arr2[j];
	//		br++;
	//		j++;
	//	}
	//}
	//if (j != n-1)
	//{
	//	while (j != n-1)
	//	{
	//		array[br] = arr2[j];
	//		j++;
	//		br++;
	//	}
	//}
	//else if(i != n-1)
	//{
	//	while (i != n-1)
	//	{
	//		array[br] = arr1[i];
	//		i++;
	//		br++;
	//	}
	//}
	for (int i = 0; i < br; i++)
	{
		cout << array[i] << " ";
	}
}
/*2.Да се напише функция на C++, която приема като параметри две отсечки в декартовата координатна система. За представянето на отсечка,
използвайте създадена от вас структура (struct, запис). Функцията да върне дължината на общата им част, ако отсечките лежат на права, 
успоредна на една от координатните оси или -1 в противен случай.*/
struct Otsechka {
	int x1=0;
	int y1=0;
	int x2=0;
	int y2=0;
};
int Duljina(Otsechka first, Otsechka second)
{
	int lenght1 = 0, lenght2 = 0;
	if (first.x1 == first.x2 && second.x1 == second.x2)
	{
		lenght1 = first.y1 - first.y2;
		if (lenght1 < 0)
		{
			lenght1 = lenght1*-1;
		}
		lenght2 = second.y1 - second.y2;
		if (lenght2 < 0)
		{
			lenght2 = lenght2 * -1;
		}
	}
	else if (first.y1 == first.y2 && second.y1 == second.y2)
	{
		lenght1 = first.x1 - first.x2;
		if (lenght1 < 0)
		{
			lenght1 = lenght1 * -1;
		}
		lenght2 = second.x1 - second.x2;
		if (lenght2 < 0)
		{
			lenght2 = lenght2 * -1;
		}
	}
	else {
		return -1;
	}
	return lenght1 + lenght2;
}
/*3. Да се напише функция на С++, която отпечатва в конзолата запълнен правоъгълник с размерност NxM,
където N, M и символът за отпечатване на правоъгълника се предават като параметри на функцията. 
Правоъгълникът да е центриран (приема се, че конзолата има 25 реда и 80 символа на ред).
*/
void Zapulvane(int n, int m)
{
	char simbol='#';
	int center_n = ((25- n) / 2),
		center_m = ((80- m) / 2);

		for (int i = 0; i < center_n; i++)
		{
					cout <<'\n';
		}
		
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < center_m; j++)
					{
						cout << " ";
					}
					for (int j = 0; j < m; j++)
					{
						cout << simbol;
					}
					cout << "\n";
				}

		for (int i = 0; i < center_n; i++)
		{
				cout <<'\n';
		}	
}
/*4.  Да се напише функция на С++, която приема като параметри цяло число N и двумерна числова квадратна матрица с размери NxN 
	  и връща като резултат сумата на елементите над главния ѝ диагонал.
*/
int SumNadDiagonal(int** matrix, int n)
{
	int sum = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}
/*5. Да се напише функция на С++, 
която приема като параметри параметри цяло число N и двумерна числова квадратна матрица А с размери NxN 
и връща като резултат транспонираната матрица на А.*/
void Transponirane(int** matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[j][i]<<" ";
		}
		cout << '\n';
	}
}
/*2.1. Да се напише функция на C++, със сигнатура
double sqrt_a(double a, double eps), която намира корен квадратен с точност eps, по
следната формула:
𝑥𝑘+1 =1/2*(𝑥𝑘 +𝑎/𝑥𝑘), k=1,2,3,…, x1=a.
Изчисленията завършват, когато 𝑥𝑘+1 − 𝑥𝑘 < 𝑒𝑝𝑠.*/
double abs_a(double a)
{
	if (a < 0)
	{
		return -a;
	}
	return a;
}

double sqrt_a(double a, double eps)
{
	double xk1 = (a + a / a) / 2;
	double xk2 = (xk1 + a / xk1) / 2;
	while (abs_a(xk2 - xk1) >= eps)
	{
		xk2 = (xk2 + a / xk2) / 2;
		xk1 = (xk1 + a / xk1) / 2;
	}
	return xk2;
}
/*2.2 Да се напише функция на С++, със сигнатура void Revert(char []), която преобразува
подадения като параметър символен низ, като замества всички малки букви от
латинската азбука с главни и обратно. Да не се използва вградената библиотека
string.*/
int Size(char a[])
{
	int size = 0;
	while (a[size] != '\0')
	{
		size++;
	}
	return size;
}
void Revert(char word[])
{
	int size = Size(word);
	for (int i = 0; i < size; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i] = word[i] + 32;
		}
		else if (word[i] >= 'a' && word[i] <= 'z')
		{
			word[i] = word[i] - 32;
		}
	}
}
/*2.3 Да се напише функция на С++, със сигнатура
bool CheckDate(char []), която да проверява дали входния параметър е коректна дата
във формат DD.MM . Да не се използва вградената библиотека string.*/
bool CheckDate(char date[])
{
	int DD = ((date[0]-'0') * 10) + (date[1]-'0');
	int MM = ((date[3]-'0') * 10) + (date[4]-'0');
	if (date[2] != '.')
	{
		return false;
	}
	if (MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 || MM == 10 || MM == 12)
	{
		if (DD < 1 || DD>31)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else if (MM == 4 || MM == 6 || MM == 9 || MM == 11)
	{
		if (DD < 1 || DD>30)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else if (MM == 2)
	{
		if (DD < 1 || DD>29)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}
/*2.4  Да се напише функция на C++, със сигнатура
int DigitPos(long num, int k), която връща като резултат k-тата цифра на числото num
или -1, ако такава не съществува. Брои се от ляво на дясно и се започва от 1.*/
int DigitPos(long num, int k)
{
	int helper = num;
	int br = 0;
	while (helper != 0)
	{
		helper /= 10;
		br++;
	}
	helper = num;
	if (br < k)
	{
		return -1;
	}
	for (int i=0;i<br-k;i++)
	{
		helper /= 10;
	}
	return helper % 10;
}
/*2.5. Да се напише функция на C++, със сигнатура
bool doExist(char* symbols, char* word), която проверява дали думата word, се среща
в символният низ symbols. Да не се използва вградената библиотека string*/

bool doExist(char* symbols, char* word)
{
	int sizeSimbol = Size(symbols);
	int sizeWord = Size(word);
	int j = 0;
	for (int i = 0; i < sizeSimbol; i++)
	{
		if (symbols[i] == word[j])
		{
			if (j == sizeWord-1)
			{
				return true;
			}
			j++;
		}
		else {
			j = 0;
		}
	}
	return false;
}
int AnalizArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > INT_MAX || arr[i] < INT_MIN)
		{
			return -1;
		}
	}
	int sumF = 0,sumS=0;
	for (int i = 0; i < size / 2; i++)
	{
		sumF += arr[i];
	}
	for (int i = size / 2; i < size; i++)
	{
		sumS += arr[i];
	}
	if (sumF == sumS)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool doExistSecond(char* symbols, char* word)
{
	int lenghtS = Size(symbols);
	int lenghtW = Size(word);
	int j = lenghtW - 1;
	for(int i=0;i<lenghtS;i++)
	{
		if (symbols[i] == word[j])
		{
			int br = 1;
			i++;
			j--;
			while (br != lenghtW - 1)
			{
				if (symbols[i] == word[j])
				{
					j--;
					i++;
					++br;
				}
				else {
					break;
				}
				if (br == lenghtW - 1)
				{
					return 1;
				}
			}
			
		}
	}
	return 0;
}
int CalculateMatrix(int** matrix, int m)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += matrix[i][i];
	}
	for (int i = 0; i < m; i++)
	{
		sum += matrix[i][m - i - 1];
	}
	return sum;
}
