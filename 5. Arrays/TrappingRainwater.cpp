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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {5, 0, 6, 2, 3};
    cout << getWaterNaive(arr, 5);

    return 0;
}