#include <bits/stdc++.h>
using namespace std;
#define ll long long

int firstOccIter(vector<int> arr, int x)
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
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
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

int numberOfOcc(vector<int> arr, int x)
{
    int first = firstOccIter(arr, x);
    if (first == -1)
        return 0;
    else
        return (lastOccIter(arr, x) - first + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {10, 20, 20, 20, 30, 40};
    cout << numberOfOcc(arr, 20);
    return 0;
}