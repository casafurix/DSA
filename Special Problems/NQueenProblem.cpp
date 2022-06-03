#include <bits/stdc++.h>
using namespace std;
#define ll long long

// x -> row, y-> col, n*n -> chess board dimensions

bool isSafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1) // queen is placed
        {
            return false;
        }
    }
    // left bottom diagonal
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // left upper diagonal
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--; // going left
        col++; // going upward
    }
    return true;
}

bool nQueen(int **arr, int x, int n)
{
    if (x >= n)
        return true;

    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}