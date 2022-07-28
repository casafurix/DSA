#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearch(vector<int> arr, int x)
{

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
            return mid;
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int binarySearchRec(vector<int> arr, int x, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (x == arr[mid])
        return mid;
    else if (x > arr[mid])
        return binarySearchRec(arr, x, mid + 1, high);
    else
        return binarySearchRec(arr, x, low, mid - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    cout << binarySearch(arr, 70) << endl;
    cout << binarySearchRec(arr, 20, 0, arr.size() - 1);
    return 0;
}