//Hristo Doychev 62375
#include<iostream>
using namespace std;
int Rec(int l, int moves)
{
    if (l == 6174)return moves;
    else
    {
        int arr[4];
        arr[0] = l % 10;
        arr[1] = l / 10 % 10;
        arr[2] = l / 100 % 10;
        arr[3] = l / 1000;
        const int n = 4;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        int maxNum = arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
        int minNum = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
        return Rec(maxNum - minNum, moves + 1);
    }
}
int main()
{
    int l;
    cin >> l;
    cout << Rec(l, 0) << endl;
    return 0;
}