#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    int res = 0;
    while (fact % 10 == 0)
    {
        res++;
        fact /= 10;
    }

    cout << res;
}