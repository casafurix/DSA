#include <bits/stdc++.h>
using namespace std;
#define ll long long

int slidingWindowNaive(int arr[], int n, int k)
{
    int max_sum = INT_MIN;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int curr_sum = 0;
        for (int j = 0; j < k; j++)
        {
            curr_sum += arr[i + j];
        }
        max_sum = max(curr_sum, max_sum);
    }
    return max_sum;
}

int slidingWindowEff(int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxSum = sum;

    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {1, 8, 30, -5, 20, 7};
    int arr2[] = {5, -10, 6, 90, 3};

    cout << slidingWindowNaive(arr1, 6, 3) << endl;
    cout << slidingWindowNaive(arr2, 5, 2) << endl;
    // cout << slidingWindowNaive2(arr2, 2) << endl;
    cout << endl;
    cout << slidingWindowEff(arr1, 6, 3) << endl;
    cout << slidingWindowEff(arr2, 5, 2) << endl;
    cout << endl;

    return 0;
}