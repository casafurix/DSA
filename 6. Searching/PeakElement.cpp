#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findPeakElementNaive(vector<int> arr)
{
    if (arr.size() == 1)
        return arr[0];
    if (arr[0] >= arr[1])
        return arr[0];
    if (arr[arr.size() - 1] >= arr[arr.size() - 2])
        return arr[arr.size() - 1];
    for (int i = 1; i < arr.size() - 1; i++)
    {
        if (arr[i] >= arr[i + 1] && arr[i] >= arr[i - 1])
            return arr[i];
    }
}

int findPeakElementEff(vector<int> arr)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid == 0 || arr[mid] >= arr[mid - 1] && mid == arr.size() - 1 || arr[mid] >= arr[mid + 1])
            return arr[mid];

        else if (mid > 0 && arr[mid - 1] >= arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    // return -1; which will never happen, as if array has even a single element, it will always have a peak!
    return -1; // if array is empty!
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {10, 20, 15, 5, 23, 90, 67};
    vector<int> arr2 = {10};
    cout << findPeakElementNaive(arr) << endl;
    cout << findPeakElementEff(arr) << endl;
    cout << findPeakElementEff(arr2);

    return 0;
}