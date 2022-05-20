#include <bits/stdc++.h>
using namespace std;
#define ll long long

void leadersNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i] << " ";
        }
    }
}

void leadersEff(int arr[], int n)
{
    int currentLeader = arr[n - 1];
    cout << currentLeader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (currentLeader < arr[i])
        {
            currentLeader = arr[i];
            cout << currentLeader << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int arr2[] = {10, 20, 30};
    leadersNaive(arr, 7);
    cout << "\n";
    leadersNaive(arr2, 3);
    cout << "\n";
    leadersEff(arr, 7);
    cout << "\n";
    leadersEff(arr2, 3);

    return 0;
}