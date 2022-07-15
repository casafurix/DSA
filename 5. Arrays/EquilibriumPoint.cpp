#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isThereEquiPointNaive(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int lSum = 0, rSum = 0;
        for (int j = 0; j < i; j++)
        {
            lSum += arr[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            rSum += arr[k];
        }
        if (lSum == rSum)
            return true;
    }
    return false;
}

bool isThereEquiPointEff(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int lSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (lSum == sum - arr[i])
            return true;
        lSum += arr[i]; // adding element to left sum
        sum -= arr[i];  // removing element from right sum
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr1[] = {3, 4, 8, -9, 20, 6};
    cout << isThereEquiPointNaive(arr1, 6) << endl;
    cout << isThereEquiPointEff(arr1, 6);

    return 0;
}