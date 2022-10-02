#include <bits/stdc++.h>
using namespace std;
#define ll long long

int printFreqNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true; // to mark whether element has occurred before
                break;
            }
        }
        if (flag == true)
        {
            continue;
        }
        int freq = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        cout << arr[i] << " " << freq << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {10, 20, 20, 30, 10};
    int n = 5;
    printFreqNaive(arr, n);

    return 0;
}