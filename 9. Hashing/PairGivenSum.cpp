#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

// another solution could be using two-pointer approach!

bool isPairNaive(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
}

bool isPairEff(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - arr[i]) != s.end())
            return true;
        s.insert(arr[i]);
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {3, 2, 8, 15, -8};
    int n = 5;
    int sum = 17;

    cout << isPairNaive(arr, n, sum) << endl;
    cout << isPairEff(arr, n, sum) << endl;

    return 0;
}