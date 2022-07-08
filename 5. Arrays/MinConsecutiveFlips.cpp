#include <bits/stdc++.h>
using namespace std;
#define ll long long

// flipping the 2nd group, and its consecutive groups gives us the least count!

void printGroups(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                // beginning of group to be flipped
                cout << "From " << i << " to ";
            }
            else // end of group to be flipped
            {
                cout << i - 1 << endl;
            }
        }
    }
    // for cases when the last element is the beginning as well as the end of the group to be flipped
    if (arr[n - 1] != arr[0])
    {
        cout << n - 1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  1,
                  1,
                  0,
                  1};
    int arr2[] = {1, 1, 0, 0, 0, 1};
    int arr3[] = {1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1};
    int arr4[] = {1, 1, 1};
    int arr5[] = {1, 0};
    printGroups(arr1, 10);
    cout << endl;
    printGroups(arr2, 6);
    cout << endl;
    printGroups(arr3, 11);
    cout << endl;
    printGroups(arr4, 3);
    cout << endl;
    printGroups(arr5, 2);

    return 0;
}