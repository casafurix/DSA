#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSubSumNaive(int arr[], int n, int givenSum)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == givenSum)
                return true;
        }
    }
    return false;
}

// this approach won't work if negative elements are present in the array
bool isSubSumEff(int arr[], int n, int givenSum)
{
    int currSum = arr[0], start = 0;
    for (int end = 1; end < n; end++)
    {
        // cleaning previous window before adding new element
        while (currSum > givenSum && start < end - 1)
        {
            currSum -= arr[start];
            start++;
        }
        if (currSum == givenSum)
            return true;
        if (end < n)
        {
            currSum += arr[end];
        }
    }
    return currSum == givenSum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {1, 8, 30, 5, 20, 7};

    cout << isSubSumNaive(arr1, 6, 55) << endl;
    cout << isSubSumNaive(arr1, 6, 44) << endl;
    cout << isSubSumNaive(arr1, 6, 42) << endl
         << endl;

    cout << isSubSumEff(arr1, 6, 55) << endl;
    cout << isSubSumEff(arr1, 6, 44) << endl;
    cout << isSubSumEff(arr1, 6, 42) << endl
         << endl;

    return 0;
}