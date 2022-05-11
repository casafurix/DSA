#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1};
    int n = 4;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            cout << "YES";
            break;
        }
        else
        {
            cout << "NO";
            break;
        }
    }

    return 0;
}