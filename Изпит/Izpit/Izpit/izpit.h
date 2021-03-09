#pragma once
//Hristo Doychev 62375
int Size_own(char* a)
{
	int br = 0;
	while (a[br] != '\0')
	{
		br++;
	}
	return br;
}
char* revandreplace(char* arr)
{
	
	int size = Size_own(arr);
	char* array = new char[size];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 'e')
		{
			arr[i] = '!';
		}
		else if (arr[i] == 'y')
		{
			arr[i] = '*';
		}
		array[size - i - 1] = arr[i];
	}
	array[size] = '\0';


	return array;
	delete[]array;
}
bool CheckDate(char arr[])
{
	int YY = ((arr[0] - '0') * 1000) + ((arr[1] - '0') * 100) + ((arr[2] - '0') * 10) + (arr[3] - '0');
	bool flag = false;
	if (YY % 4 == 0)
	{
		if (YY % 100 == 0)
		{
			if (YY % 400 == 0)
			{
				flag = true;
			}
		}
		else
		{
			flag = true;
		}
	}
	else
	{
		flag = true;
	}
	return flag;
}
int* counterletters(int arr1[], int arr2[], int N)
{
	int* answer = new int[2];
	int* array = new int[N];
	int br_a = 0, br_A = 0;
	for (int i = 0; i < N; i++)
	{
		array[i] = 0;
	}
	for (int i = 0; i < N; i++)
	{
		array[i] = arr1[i] + arr2[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (array[i] > 64 && array[i] < 91)
		{
			br_A++;
		}
		else if (array[i] > 96 && array[i] < 123)
		{
			br_a++;
		}
	}
	answer[0] = br_A;
	answer[1] = br_a;
	delete[]array;
	return answer;
}