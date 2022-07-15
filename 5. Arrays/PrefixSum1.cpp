#include <bits/stdc++.h>
using namespace std;
#define ll long long

int queryNaive(int arr[], int n, int p, int q)
{
    int sum = 0;
    for (int i = p; i < q; i++)
        sum += arr[i];

    return sum;
}

int prefixSum(int arr[], int n)
{
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    return prefixSum;
}

int queryEff(int arr[], int prefixSum[], int n, int l, int r)
{
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    if (l != 0)
        return prefixSum[r] - prefixSum[l - 1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}