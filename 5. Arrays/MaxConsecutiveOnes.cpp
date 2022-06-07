#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxConsecOnesNaive(int arr[], int n)
{
    int count = 0, maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
            continue;
        }
        count++;
        maxCount = max(count, maxCount);
    }
    return maxCount;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    cout << maxConsecOnesNaive(arr1, 9) << endl;

    int arr2[] = {0, 1, 1, 0, 1, 0};
    cout << maxConsecOnesNaive(arr2, 6) << endl;

    return 0;
}