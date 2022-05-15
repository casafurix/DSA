#include <bits/stdc++.h>
using namespace std;
#define ll long long

void moveZerosNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {

            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[j], arr[i]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

void moveZerosEfficient(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {10,
                 5,
                 0,
                 0,
                 8,
                 0,
                 9,
                 0};

    // moveZerosNaive(arr, 8);
    cout << endl;
    moveZerosEfficient(arr, 8);

    return 0;
}