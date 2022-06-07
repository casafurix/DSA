#include <bits/stdc++.h>
using namespace std;
#define ll long long

int getWaterNaive(int arr[], int n)
{
    int res = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int lMax = arr[i];
        for (int j = 0; j < i; j++)
            lMax = max(arr[j], lMax);

        int rMax = arr[i];
        for (int j = i + 1; j < n; j++)
            rMax = max(arr[j], rMax);

        res += min(lMax, rMax) - arr[i];
    }
    return res;
}

int getWaterEff(int arr[], int n)
{
    int res = 0;
    int lMax[n], rMax[n];

    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        lMax[i] = max(arr[i], lMax[i - 1]);

    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rMax[i] = max(arr[i], rMax[i + 1]);

    for (int i = 1; i < n - 1; i++)
    {
        res += min(lMax[i], rMax[i]) - arr[i];
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {3, 0, 2, 0, 4};
    cout << getWaterNaive(arr, 5);
    cout << endl;
    cout << getWaterEff(arr, 5);

    return 0;
}