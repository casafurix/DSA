#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long

int countDistinctNaive(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            res++;
    }
    return res;
}

int countDistinctEff(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}

int countDistinctMostEff(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    return s.size();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {10, 20, 10, 20, 30};
    int n = 5;
    cout << countDistinctNaive(arr, n) << endl;
    cout << countDistinctEff(arr, n) << endl;
    cout << countDistinctMostEff(arr, n) << endl;

    return 0;
}