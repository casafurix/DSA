#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[13] = {9, 12, 2, 11, 2, 2, 10, 9, 12, 10, 9, 11, 2};
    int x = arr[0];
    for (int i = 1; i < 13; i++)
    {
        x = x ^ arr[i];
    }

    cout << x << endl;
    cout << (9 ^ 12) << endl;
    cout << (5 ^ 2);
}