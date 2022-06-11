#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxLenEvenOddSubArrayNaive(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j - 1] % 2 == 0 && arr[j] % 2 != 0) || (arr[j - 1] % 2 != 0 && arr[j] % 2 == 0))
            {
                count++;
            }
            else
                break;
        }
        res = max(res, count);
    }
    return res;
}

int maxLenEvenOddSubArrayEff(int arr[], int n)
{
    int res = 1, count = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i - 1] % 2 == 0 && arr[i] % 2 != 0) || (arr[i - 1] % 2 != 0 && arr[i] % 2 == 0))
        {
            count++;
            res = max(res, count);
        }
        else
            count = 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {10, 12, 14, 7, 8};
    int arr2[] = {7, 10, 13, 14};
    int arr3[] = {10, 12, 8, 4};
    cout << maxLenEvenOddSubArrayEff(arr1, 5) << endl;
    cout << maxLenEvenOddSubArrayEff(arr2, 4) << endl;
    cout << maxLenEvenOddSubArrayEff(arr3, 4) << endl
         << "\n";
    cout << maxLenEvenOddSubArrayNaive(arr1, 5) << endl;
    cout << maxLenEvenOddSubArrayNaive(arr2, 4) << endl;
    cout << maxLenEvenOddSubArrayNaive(arr3, 4) << endl
         << "\n";
    return 0;
}