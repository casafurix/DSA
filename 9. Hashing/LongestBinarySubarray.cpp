#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

int longestBinarySubarrayNaive(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int c0 = 0, c1 = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
                c0++;
            else
                c1++;
            if (c0 == c1)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

int longestBinarySubarrayEff(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            arr[i] = -1;
        cout << arr[i] << " ";
    }

    unordered_map<int, int> m;
    int prefixSum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == 0)
            res = i + 1;

        // we insert only if prefixSum doesn't already exist in the hashmap!
        if (m.find(prefixSum) == m.end())
            m.insert({prefixSum, i});

        if (m.find(prefixSum) != m.end())
            res = max(res, i - m[prefixSum]);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1, 0, 1, 1, 1, 0, 0}, n = 7;
    cout << longestBinarySubarrayNaive(arr, n) << endl;
    cout << longestBinarySubarrayEff(arr, n) << endl;

    return 0;
}