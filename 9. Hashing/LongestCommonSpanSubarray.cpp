#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

int maxCommonNaive(int arr1[], int arr2[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = i; j < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];
            if (sum1 == sum2)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

int maxCommonEff(int arr1[], int arr2[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr1[i] - arr2[i];
    }

    unordered_map<int, int> m;
    int prefixSum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += temp[i];

        if (prefixSum == 0)
            res = i + 1;

        if (m.find(prefixSum) == m.end())
            m.insert({prefixSum, i});

        if (m.find(prefixSum - 0) != m.end())
            res = max(res, i - m[prefixSum - 0]);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {0, 1, 0, 1, 1, 1, 1}, arr2[] = {1, 1, 1, 1, 1, 0, 1}, n = 7;
    int arr3[] = {0, 1, 0, 0, 0, 0}, arr4[] = {1, 0, 1, 0, 0, 1}, n2 = 6;

    cout << maxCommonNaive(arr1, arr2, n) << endl;
    cout << maxCommonEff(arr1, arr2, n) << endl
         << endl;
    cout << maxCommonNaive(arr3, arr4, n2) << endl;
    cout << maxCommonEff(arr3, arr4, n2) << endl
         << endl;

    return 0;
}