/*
*
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Hristo Doychev
* @idnumber 62375
* @task 2
* @compiler VC
*
*/
#include<iostream>
using namespace std;
int FullWord(char first[], char second[], char result[])
{
	bool bigSimbol = true;
	bool flagFirst_plus_second_sizeFirstSecond = true;
	bool flagFirst_plus_second_sizeSecondFirst = true;
	bool flagSecond_plus_first_sizeFirstSecond = true;
	bool flagSecond_plus_first_sizeSecondFirst = true;
	bool booleanbreak = true;
	int size_first = 0, size_second = 0, size_result = 0;
	//Size -->
	while (first[size_first] != '\0')
	{
		size_first++;
	}
	while (second[size_second] != '\0')
	{
		size_second++;
	}
	while (result[size_result] != '\0')
	{
		size_result++;
	}
	for (int i = 0; i < size_first; i++)
	{
		if (97 > (int)first[i] || (int)first[i] > 122)
		{
			bigSimbol = false;
			break;
		}
	}
	if (bigSimbol == false)
	{
		return -1;
	}
	for (int i = 0; i < size_second; i++)
	{
		if (97 > (int)second[i] || (int)second[i] > 122)
		{
			bigSimbol = false;
			break;
		}
	}
	if (bigSimbol == false)
	{
		return -1;
	}
	for (int i = 0; i < size_result; i++)
	{
		if (97 > (int)result[i] || (int)result[i] > 122)
		{
			bigSimbol = false;
			break;
		}
	}
	if (bigSimbol == false)
	{
		return -1;
	}
	if (size_first + size_second != size_result)
	{
		return 0;
	}
	char* resultFirst = new char[size_result+1];
	char* resultSecond = new char[size_result+1];
	for (int i = 0; i < size_result; i++)
	{
		resultFirst[i] = result[i];
		resultSecond[i] = result[i];
	}
	resultFirst[size_result] = '\0';
	resultSecond[size_result] = '\0';
	//Sort-->
	for (int i = 0; i < size_first - 1; i++)
	{
		for (int j = i + 1; j < size_first; j++)
		{
			if (first[i] > first[j])
			{
				char swap = '\0';
				swap = first[i];
				first[i] = first[j];
				first[j] = swap;
			}
		}
	}
	for (int i = 0; i < size_second - 1; i++)
	{
		for (int j = i + 1; j < size_second; j++)
		{
			if (second[i] > second[j])
			{
				char swap = '\0';
				swap = second[i];
				second[i] = second[j];
				second[j] = swap;
			}
		}
	}
	//new char resultFirst- e sortiran kato sa otdeleni razmeri purvo na purviq posle na vtoriq 
	for (int i = 0; i < size_first - 1; i++)
	{
		for (int j = i + 1; j < size_first; j++)
		{
			if (resultFirst[i] > resultFirst[j])
			{
				char swap = '\0';
				swap = resultFirst[i];
				resultFirst[i] = resultFirst[j];
				resultFirst[j] = swap;
			}
		}
	}
	for (int i = size_first; i < size_result- 1; i++)
	{
		for (int j = i + 1; j < size_result; j++)
		{
			if (resultFirst[i] > resultFirst[j])
			{
				char swap = '\0';
				swap = resultFirst[i];
				resultFirst[i] = resultFirst[j];
				resultFirst[j] = swap;
			}
		}
	}
	// resultSecond
	for (int i = 0; i < size_second -1; i++)
	{
		for (int j = i + 1; j < size_second; j++)
		{
			if (resultSecond[i] > resultSecond[j])
			{
				char swap = '\0';
				swap = resultSecond[i];
				resultSecond[i] = resultSecond[j];
				resultSecond[j] = swap;
			}
		}
	}
	for (int i = size_second; i < size_result - 1; i++)
	{
		for (int j = i + 1; j < size_result; j++)
		{
			if (resultSecond[i] > resultSecond[j])
			{
				char swap = '\0';
				swap = resultSecond[i];
				resultSecond[i] = resultSecond[j];
				resultSecond[j] = swap;
			}
		}
	}

	//First+Second=Result ?
	for (int i = 0; i < size_first; i++)
	{
		if (first[i] != resultFirst[i])
		{
			flagFirst_plus_second_sizeFirstSecond = false;
			booleanbreak = false;
			break;
		}
	}
	if (booleanbreak == true)
	{
		int j = size_first;
		for (int i = 0; i < size_second; i++)
		{
			if (second[i] != resultFirst[j])
			{
				flagFirst_plus_second_sizeFirstSecond= false;
				break;
			}
			j++;
		}
	}
	booleanbreak = true;
	//
	for (int i = 0; i < size_first; i++)
	{
		if (first[i] != resultSecond[i])
		{
			flagFirst_plus_second_sizeSecondFirst = false;
			booleanbreak = false;
			break;
		}
	}
	if (booleanbreak == true)
	{
		int j = size_first;
		for (int i = 0; i < size_second; i++)
		{
			if (second[i] != resultSecond[j])
			{
				flagFirst_plus_second_sizeSecondFirst = false;
				break;
			}
			j++;
		}
	}
	booleanbreak = true;
	//Second+First=result ?
	for (int i = 0; i < size_second; i++)
	{
		if (second[i] != resultFirst[i])
		{
			flagSecond_plus_first_sizeFirstSecond = false;
			booleanbreak = false;
			break;
		}
	}
	if (booleanbreak == true)
	{
		int j = size_second;
		for (int i = 0; i < size_first; i++)
		{
			if (first[i] != resultFirst[j])
			{
				flagSecond_plus_first_sizeFirstSecond = false;
				break;
			}
			j++;
		}
	}
	//
	booleanbreak = true;
	for (int i = 0; i < size_second; i++)
	{
		if (second[i] != resultSecond[i])
		{
			flagSecond_plus_first_sizeSecondFirst = false;
			booleanbreak = false;
			break;
		}
	}
	if (booleanbreak == true)
	{
		int j = size_second;
		for (int i = 0; i < size_first; i++)
		{
			if (first[i] != resultSecond[j])
			{
				flagSecond_plus_first_sizeSecondFirst= false;
				break;
			}
			j++;
		}
	}
	//
	delete[]resultFirst;
	delete[]resultSecond;
	if (flagFirst_plus_second_sizeFirstSecond==true||flagFirst_plus_second_sizeSecondFirst==true||
		flagSecond_plus_first_sizeFirstSecond==true||flagSecond_plus_first_sizeSecondFirst==true)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char input[450];
	char first[150], second[150], result[150];
	cin.getline(input, 450);
	int i = 0,j=0,k=0,count=0;
	while (input[i]!='\0')
	{
		if (count == 0)
		{
			if (input[i] == ' ')
			{
				count++;
				first[i] = '\0';
			}
			else
			{
				first[i] = input[i];
			}
			
		}
		else if (count == 1)
		{
			if (input[i] == ' ')
			{
				count++;
				second[j] = '\0';
			}
			else {
				second[j] = input[i];
				j++;
			}
			
		}
		else 
		{
			result[k] = input[i];
			k++;
		}
		i++;
	}

	result[k] = '\0';
	cout << FullWord(first, second, result);
	return 0;
}