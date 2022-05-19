#include <bits/stdc++.h>
using namespace std;
#define ll long long

void leftRotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1, 2, 3, 4, 5};
    leftRotate(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}