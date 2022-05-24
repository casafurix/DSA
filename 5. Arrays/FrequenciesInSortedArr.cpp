#include <bits/stdc++.h>
using namespace std;
#define ll long long

int getFrequency(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1]) // 2nd condition cuz sorted array
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << "\n";
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
        cout << arr[n - 1] << " " << 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {10, 10, 10, 30, 30, 40};
    getFrequency(arr, 6);
    return 0;
}