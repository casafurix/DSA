#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxDifferenceEff(int arr[], int n)
{
    int maxDiff = arr[1] - arr[0], minSoFar = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxDiff = max(maxDiff, arr[i] - minSoFar);
        minSoFar = min(arr[i], minSoFar);
    }
    return maxDiff;
}

int maxDifferenceNaive(int arr[], int n)
{
    int maxDiff = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxDiff = max(maxDiff, arr[j] - arr[i]);
        }
    }
    return maxDiff;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {30, 10, 8, 2};
    int arr2[] = {2, 3, 10, 6, 4, 8, 1};
    cout << maxDifferenceEff(arr1, 4) << endl;
    cout << maxDifferenceEff(arr2, 7) << endl;
    cout << maxDifferenceNaive(arr1, 4) << endl;
    cout << maxDifferenceNaive(arr2, 7) << endl;
    return 0;
}