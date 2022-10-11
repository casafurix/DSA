#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

int longestSubarrayNaive(int arr[], int n, int sum)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            if (currentSum == sum)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

int longestSubarrayEff(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int prefixSum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == sum)
            res = i + 1;
        if (m.find(prefixSum) == m.end())
            m.insert({prefixSum, i});
        if (m.find(prefixSum - sum) != m.end())
            res = max(res, i - m[prefixSum - sum]);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {5, 8, -4, -4, 9, -2, -2}, n = 7, sum = 0;
    int arr2[] = {3, 1, 0, 1, 8, 2, 3, 6}, n2 = 8, sum2 = 5;
    cout << longestSubarrayNaive(arr, n, sum) << endl;
    cout << longestSubarrayNaive(arr2, n2, sum2) << endl
         << endl;

    cout << longestSubarrayEff(arr, n, sum) << endl;
    cout << longestSubarrayEff(arr2, n2, sum2) << endl;

    return 0;
}