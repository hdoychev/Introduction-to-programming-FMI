/**
*
* Solution to homework assignment 2
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
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
double Profit(double a[], int lenght)
{
    double profit = 0.0;
    double max_profit = 0.0;
    for (int i = 0; i < lenght - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            profit = a[i + 1] - a[i];
            max_profit = max_profit + profit;
        }
    }
    return max_profit;
}
int main() {
    bool flag=true;
    int n;
    cin >> n;
    if (n < 3 ||n>365)
    {
        cout << "invalid target!!! \n";
    }
    else {
   double a[366];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <0.1 || a[i]>100)
        {
            flag = false;
            break;
        }
        else {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << Profit(a, n) << '\n';
    }
    else {
        cout << "Cena na akciqta za den e po-malka ot 0.1 ili po-golqma ot 100" << '\n';
    }
    }
    return 0;
}
