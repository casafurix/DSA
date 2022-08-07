#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fib(int n)
{
    vector<int> memo(n + 1, -1);
    if (memo[n] == -1)
    {
        int res;
        if (n == 0 || n == 1)
            res = n;
        else
        {
            res = fib(n - 1) + fib(n - 2);
        }
        memo[n] = res;
    }
    return memo[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << fib(10);

    // int n;
    // cin >> n;

    // vector<int> memo(n + 1, -1);
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << memo[i] << " ";
    // }

    return 0;
}