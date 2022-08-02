#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearchRec(vector<int> arr, int x, int low, int high)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return binarySearchRec(arr, x, low, mid - 1);
    else
        return binarySearchRec(arr, x, mid + 1, high);
}

int searchRotatedSortedRec(vector<int> arr, int x)
{
    int low = 0, high = arr.size() - 1, mid = (low + high) / 2;

    if (arr[mid] == x)
        return mid;

    else if (arr[mid] > arr[low])
    {
        if (x == arr[binarySearchRec(arr, x, low, mid - 1)])
            return binarySearchRec(arr, x, low, mid - 1);

        return binarySearchRec(arr, x, mid + 1, high);
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {10, 20, 30, 40, 50, 8, 9};
    vector<int> arr2 = {100, 200, 500, 1000, 2000, 10, 20};
    vector<int> arr3 = {10, 20, 40, 60, 5, 8};
    cout << searchRotatedSortedRec(arr, 30) << endl;
    cout << searchRotatedSortedRec(arr2, 10) << endl;
    cout << searchRotatedSortedRec(arr2, 40) << endl;
    cout << searchRotatedSortedRec(arr, 40) << endl
         << endl;
    cout << searchRotatedSortedRec(arr3, 5) << endl;
    cout << searchRotatedSortedRec(arr3, 6) << endl;

    return 0;
}