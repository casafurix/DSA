#include <bits/stdc++.h>
using namespace std;
#define ll long long

int getMaxSumSubarray(int arr[], int n)
{
    int sum = arr[0], maxSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum = max(arr[i], sum + arr[i]);
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    int arr2[] = {5, 8, 3};
    int arr3[] = {-6, -1, -8};
    int arr4[] = {1, -2, 3, -1, 2};
    int arr5[] = {-5, 1, -2, 3, -1, 2, -2};
    int arr6[] = {-3, 8, -2, 4, -5, 6};
    cout << getMaxSumSubarray(arr1, 7) << endl;
    cout << getMaxSumSubarray(arr2, 3) << endl;
    cout << getMaxSumSubarray(arr3, 3) << endl;
    cout << getMaxSumSubarray(arr4, 5) << endl;
    cout << getMaxSumSubarray(arr5, 7) << endl;
    cout << getMaxSumSubarray(arr6, 6) << endl;

    return 0;
}