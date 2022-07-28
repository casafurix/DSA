#include <bits/stdc++.h>
using namespace std;
#define ll long long

// time complexity -> O(logn)
int countOnes(vector<int> arr)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
            low = mid + 1;
        else
        {
            // arr[mid - 1] == 0 and arr[mid - 1] != arr[mid] can be used interchangeably as we are dealing with only 2 numbers, 0 and 1
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return arr.size() - mid;
            else
                high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {0, 0, 1, 1, 1, 1};
    cout << countOnes(arr);

    return 0;
}