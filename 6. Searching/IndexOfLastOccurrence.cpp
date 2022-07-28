#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lastOccRec(vector<int> arr, int x, int low, int high)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (x > arr[mid])
    {
        return lastOccRec(arr, x, mid + 1, high);
    }
    else if (x < arr[mid])
    {
        return lastOccRec(arr, x, low, mid - 1);
    }
    else
    {
        if (mid == arr.size() - 1 || arr[mid + 1] != arr[mid])
            return mid;
        else
            return lastOccRec(arr, x, mid + 1, high);
    }
}

int lastOccIter(vector<int> arr, int x)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x > arr[mid])
            low = mid + 1;
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            if (mid == arr.size() - 1 || arr[mid + 1] != arr[mid])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {5, 10, 10, 15, 20, 20, 20};
    cout << lastOccRec(arr, 20, 0, arr.size() - 1) << endl;
    cout << lastOccIter(arr, 20);

    return 0;
}