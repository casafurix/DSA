#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = res * x;
        }
        x = x * x;
        n = n >> 1;
    }
    return res;
}

ll additionModulo(ll a, ll b)
{
    ll m = power(10, 9) + 7;
    return (a % m + b % m) % m;
    // theorem: (a+b)%m = (a%m + b%m)%m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << additionModulo(92233720368547758, 92233720368547758);
    cout << power(10, 9) + 7;

    return 0;
}