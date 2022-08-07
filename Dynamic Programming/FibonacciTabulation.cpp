#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fibTab(int n)
{
    int f[n + 1];
    if (n == 0 || n == 1)
        f[n] = n;

    for (int i = 2; i <= n; i++)
    {
        f[i] = fibTab(n - 1) + fibTab(n - 2);
    }
    return f[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << fibTab(2);

    return 0;
}