#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPresent(int arr[], int n, int givenSum, int k)
{
    int currentSum = 0;
    for (int i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }
    if (currentSum == givenSum)
        return true;
    for (int i = k; i < n; i++)
    {
        currentSum += arr[i] - arr[i - k];
        if (currentSum == givenSum)
            return true;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr1[] = {1, 8, 30, -5, 20, 7};

    cout << isPresent(arr1, 6, 45, 3) << endl;
    cout << isPresent(arr1, 6, 44, 3);
    return 0;
}