#include <bits/stdc++.h>
using namespace std;
#define ll long long

int power(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << power(2, 2);

    return 0;
}