#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearch(vector<int> arr, int x, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (x == arr[mid])
        return mid;
    else if (x > arr[mid])
        return binarySearch(arr, x, mid + 1, high);
    else
        return binarySearch(arr, x, low, mid - 1);
}

int searchInfSortedNaive(vector<int> arr, int x)
{
    int i = 0;
    while (true)
    {
        if (arr[i] == x)
            return i;
        if (arr[i] > x)
            return -1;
        i++;
    }
}

int searchInfSortedEff(vector<int> arr, int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] < x)
    {
        i *= 2;
    }
    if (arr[i] == x)
        return i;

    return binarySearch(arr, x, (i / 2) + 1, i - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}