/**
*
* Solution to homework assignment 4
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
#include <iostream>
using namespace std;

int n, m, endX, endY;
int matrix[200][200] = { 0 };

bool validIdxs(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m) {
        return false;
    }
    else {
        return true;
    }
}

bool KnightCanMakeIt(int currX, int currY, int leftMoves) {
    if (currX == endX && currY == endY) {
        return true;
    }

    if (leftMoves == 0) {
        return false;
    }

    matrix[currX][currY] = 1;

    if (validIdxs(currX - 1, currY - 2)) {
        if (matrix[currX - 1][currY - 2] == 0) {
            if (KnightCanMakeIt(currX - 1, currY - 2, leftMoves - 1)) {
                return true;
            }
        }
    }

    if (validIdxs(currX + 1, currY - 2)) {
        if (matrix[currX + 1][currY - 2] == 0) {
            if (KnightCanMakeIt(currX + 1, currY - 2, leftMoves - 1)) {
                return true;
            }
        }
    }

    if (validIdxs(currX - 1, currY + 2)) {
        if (matrix[currX - 1][currY + 2] == 0) {
            if (KnightCanMakeIt(currX - 1, currY + 2, leftMoves - 1)) {
                return true;
            }
        }
    }

    if (validIdxs(currX + 1, currY + 2)) {
        if (matrix[currX + 1][currY + 2] == 0) {
            if (KnightCanMakeIt(currX + 1, currY + 2, leftMoves - 1)) {
                return true;
            }
        }
    }

    if (validIdxs(currX - 2, currY - 1)) {
        if (matrix[currX - 2][currY - 1] == 0) {
            if (KnightCanMakeIt(currX - 2, currY - 1, leftMoves - 1)) {
                return true;
            }
        }
    }

    if (validIdxs(currX + 2, currY - 1)) {
        if (matrix[currX + 2][currY - 1] == 0) {
            if (KnightCanMakeIt(currX + 2, currY - 1, leftMoves - 1)) {
                return true;
            }
        }
    }

    if (validIdxs(currX - 2, currY + 1)) {
        if (matrix[currX - 2][currY + 1] == 0) {
            if (KnightCanMakeIt(currX - 2, currY + 1, leftMoves - 1)) {
                return true;
            }
        }
    }

    if (validIdxs(currX + 2, currY + 1)) {
        if (matrix[currX + 2][currY + 1] == 0) {
            if (KnightCanMakeIt(currX + 2, currY + 1, leftMoves - 1)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int k, startX, startY;
    cout << "Razmeri na shahmatnata duska: \n \t";
    cin >> n >> m;
    if (n < 4 || n>200 || m < 4 || m>200)
    {
        return -1;
    }
    cout << "\n""Startovi kozicii na konq(x,y): \n \t";
    cin >> startX >> startY;
    if (startX < 0|| startX>199 || startY< 0|| startY>199)
    {
        return -1;
    }
    cout << "\n""Do kude trqbva da stigne konq(x,y): \n \t";
    cin >> endX >> endY;
    if (endX < 0 || endX>199 || endY < 0 || endY>199)
    {
        return -1;
    }
    cout << "\n""broi hodove, za da stigne do kraina poziciq: \n \t";
    cin >> k;
    if (k < 1 || k>30)
    {
        return -1;
    }
    cout << "\n""        Answer: ";
    if (!validIdxs(startX, startY) || !validIdxs(endX, endY)) {
        cout << "False";
    }
    else {
        if (KnightCanMakeIt(startX, startY, k)) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    cout << '\n';
    return 0;
}