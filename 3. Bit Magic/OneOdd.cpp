#include <bits/stdc++.h>
using namespace std;
#define ll long long

void findOnlyOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count % 2 != 0)
            cout << arr[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {4, 3, 4, 4, 4, 5, 5};
    findOnlyOdd(arr, 7);

    return 0;
}