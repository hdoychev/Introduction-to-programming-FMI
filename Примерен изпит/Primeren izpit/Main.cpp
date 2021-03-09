#include"IzpitPrimerni.h"
int main()
{
	  int arr1[5], arr2[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}
	SortArray(arr1, arr2, 5);
	
	//zad 2//Otsechka first, second;
	//first.x1 = 2; first.y1 = 1;
	//first.x2 = 5; first.y2 = 1;
	//second.x1 = 3; second.y1 = -1;
	//second.x2 = 6; second.y2 = -1;
	//cout << Duljina(first, second);
	
	/*int n = 15, m = 15;
	Zapulvane(n, m);*/

	//4!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//int n,input=0;
	//cout << "n=";
	//cin >> n;
	//int** matrix=new int*[n];
	//cout << "input matrix";
	//for (int i = 0; i < n; i++)
	//{
	//	matrix[i] = new int[n];
	//}
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		std::cin >> input;
	//		matrix[i][j] = input;
	//	}
	//}
	//cout << SumNadDiagonal(matrix, 3);

	//5
	/*int n = 0,input=0;
	cin >> n;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			matrix[i][j] = input;
		}
	}
	 Transponirane(matrix, n);*/
	//2.1
	//cout << sqrt_a(4.2,0.0001);
	
	//2.2
	/*char word[13] = "Hello World";
	Revert(word);
	int i = 0;
	while (word[i] != '\0')
	{
		cout << word[i];
		i++;
	}*/

	//2.3
	//char date[]="12.05";
	//cout<<CheckDate(date);
	
	//2.4
	//long num=123,num2=123456;
	//int k = 5,k2=2;
	//cout << DigitPos(num, k);

	//2.5
	//char symbols[] = "asdwordldas";
	//char word[] = "ssss";
	//cout << doExist(symbols, word);

	//int arr[] = { 1,3,0,0,4 },size=5;
	//int arr[] = { 31,0,45,60 },size=4;
	//cout << AnalizArray(arr, size);
	

	/*char symbols[] = "llaptop", word[]="potpal";
	cout << doExistSecond(symbols, word);*/
	
	/*int m;
	cin >> m;
	int** matrix = new int* [m];
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[m];
	}
	int input = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> input;
			matrix[i][j] = input;
		}
		cout << '\n';
	}
	cout << CalculateMatrix(matrix, m);*/
	return 0;

}
