#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findMissing(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    for (int i = 1; i <= n + 1; i++)
    {
        res = res ^ i;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1, 5, 3, 2};
    cout << findMissing(arr, 4);

    return 0;
}