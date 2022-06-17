#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else if (a < b)
            b = b - a;
    }
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << gcd(66, 33);

    return 0;
}