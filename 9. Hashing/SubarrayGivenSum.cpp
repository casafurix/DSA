#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

bool givenSumSubarrayNaive(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            if (currentSum == sum)
                return true;
        }
    }
    return false;
}

bool givenSumSubarrayEff(int arr[], int n, int sum)
{
    unordered_set<int> s;
    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (prefixSum == sum)
            return true;
        prefixSum += arr[i];
        if (s.find(prefixSum - sum) != s.end())
            return true;
        s.insert(prefixSum);
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {15, 2, 8, 10, -5, -8, 6}, n = 7, sum = 3;
    int arr2[] = {3, 3, 5, 6}, n2 = 4, sum2 = 10;
    int arr3[] = {10, 2, -2, -20, 10}, n3 = 5, sum3 = -10;
    cout << givenSumSubarrayNaive(arr, n, sum) << endl;
    cout << givenSumSubarrayNaive(arr2, n2, sum2) << endl;
    cout << givenSumSubarrayNaive(arr3, n3, sum3) << endl
         << endl;

    cout << givenSumSubarrayEff(arr, n, sum) << endl;
    cout << givenSumSubarrayEff(arr2, n2, sum2) << endl;
    cout << givenSumSubarrayEff(arr3, n3, sum3) << endl;

    return 0;
}