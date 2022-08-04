#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int arr[], int a, int b)
{
    int s = 0;
    for (int i = a; i <= b; i++)
    {
        s += arr[i];
    }
    return s;
}

// k -> number of students, n -> number of books
int minPagesNaive(int arr[], int n, int k)
{
    if (k == 1)
        return sum(arr, 0, n - 1);
    if (n == 1)
        return arr[0];
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        res = min(res, max(minPagesNaive(arr, i, k - 1), sum(arr, i, n - 1)));
    }
    return res;
}

// -----------------------------------------------------------------------------------------------------
// Efficient solution
// -----------------------------------------------------------------------------------------------------
bool isFeasible(int arr[], int n, int k, int mid)
{
    int requiredStudents = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] > mid)
        {
            requiredStudents++;
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    return (requiredStudents <= k);
}

int minPagesEff(int arr[], int n, int k)
{

    int high = 0;
    int low = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        high += arr[i];
        low = max(low, arr[i]);
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isFeasible(arr, n, k, mid))
        {
            // if feasible, go to left half
            res = mid;
            high = mid - 1;
        }
        // else, go to right half
        else
        {
            low = mid + 1;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {10, 5, 30, 1, 2, 5, 10, 10};
    int arr2[] = {10, 20, 30};
    int arr3[] = {10, 20, 30, 40};
    cout << minPagesNaive(arr, 8, 3) << endl;
    cout << minPagesNaive(arr2, 3, 1) << endl;
    cout << minPagesNaive(arr3, 4, 2) << endl
         << endl;
    cout << minPagesEff(arr, 8, 3) << endl;
    cout << minPagesEff(arr2, 3, 1) << endl;
    cout << minPagesEff(arr3, 4, 2) << endl
         << endl;

    return 0;
}