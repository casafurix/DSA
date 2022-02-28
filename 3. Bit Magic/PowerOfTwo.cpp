#include <bits/stdc++.h>
using namespace std;
#define ll long long

int powerOfTwoNaive(int n)
{
    if (n == 0)
        return false;

    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

int powerOfTwoOptimised(int n)
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << powerOfTwoNaive(2);

    return 0;
}