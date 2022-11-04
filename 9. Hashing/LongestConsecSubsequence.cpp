#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

// O(n * logn) time complexity
int longestConsecSubsequenceNaive(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
            curr++;
        else
        {
            res = max(res, curr);
            curr = 1;
        }
    }
    return max(res, curr);
}

// linear time complexity
int longestConsecSubsequenceEff(int arr[], int n)
{
    unordered_set<int> h(arr, arr + n);
    int res = 1;

    for (auto x : h)
    {
        if (h.find(x - 1) == h.end())
        {
            int curr = 1;
            while (h.find(x + curr) != h.end())
                curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1, 9, 3, 4, 2, 20}, n = 6;
    int arr2[] = {2, 9, 4, 3, 10}, n2 = 5;
    cout << longestConsecSubsequenceNaive(arr, n) << endl;
    cout << longestConsecSubsequenceNaive(arr2, n2) << endl
         << endl;

    cout << longestConsecSubsequenceEff(arr, n) << endl;
    cout << longestConsecSubsequenceEff(arr2, n2) << endl
         << endl;
    return 0;
}