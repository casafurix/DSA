#include <bits/stdc++.h>
using namespace std;
#define ll long long

int getSecondLargest(int arr[], int n)
{
    int largest = 0, res = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] < arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << arr[getSecondLargest(arr, n)];

    return 0;
}