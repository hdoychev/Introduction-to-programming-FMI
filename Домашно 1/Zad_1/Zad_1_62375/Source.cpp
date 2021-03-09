/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Hristo Doychev
* @idnumber 62375
* @task 1
* @compiler VC
*
*/
#include<iostream>
using namespace std;
int main()
{
    int N = 0, X = 0, M = 0, sum = 0, br = 1;
    cin >> N >> X >> M;
    for (int i = 0; i < N; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            sum = (sum + (30 * br)) - 5;
            br++;
        }
        else
        {
            sum = sum + M;
        }
    }
    if (X > sum)
    {
        cout << "NO" << '\n' << X - sum;
    }
    else
    {
        cout << "YES " << '\n' << sum - X;
    }
}