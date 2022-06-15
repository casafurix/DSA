#include <bits/stdc++.h>
using namespace std;
#define ll long long

int majorityElementNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
            return i;
    }
    return -1;
}

int majorityElementEff(int arr[], int n)
{
    // find a candidate
    int count = 1, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    // check if candidate is actually a majority
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;

        if (count <= n / 2)
            res = -1;

        return res;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr1[] = {8, 7, 6, 8, 6, 6, 6, 6};
    cout << majorityElementNaive(arr1, 8) << endl;
    cout << majorityElementNaive(arr1, 8);

    return 0;
}