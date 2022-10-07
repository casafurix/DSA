#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

bool is0SubarrayNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            if (currentSum == 0)
                return true;
        }
    }
    return false;
}

bool is0SubarrayEff(int arr[], int n)
{
    unordered_set<int> s;
    int prefixSum = 0;

    for (int i = 0; i < n; i++)
    {
        // if any array has a subarray with sum = 0, then we will definitely obtain the same prefix sum at some stage in this loop!
        prefixSum += arr[i];
        if (s.find(prefixSum) != s.end())
        {
            return true;
        }
        if (prefixSum == 0)
            return true;
        s.insert(arr[i]);
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {3, 4, 3, 1, -1}, n = 5;
    cout << is0SubarrayNaive(arr, n) << endl;
    cout << is0SubarrayEff(arr, n);

    return 0;
}