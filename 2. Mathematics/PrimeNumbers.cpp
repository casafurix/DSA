#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrimeNaive(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPrimeEff(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool isPrimeMostEff(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << "Naive Prime: " << isPrimeNaive(67) << endl;
    cout << "Lil Efficient Prime: " << isPrimeEff(67) << endl;
    cout << "Most Efficient Prime: " << isPrimeMostEff(67);
    return 0;
}