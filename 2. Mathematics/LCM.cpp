#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcmEfficient(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int lcmNaive(int a, int b)
{
    int maximum = max(a, b);
    while (true)
    {
        if (maximum % a == 0 && maximum % b == 0)
        {
            return maximum;
        }
        maximum++;
    }
    return maximum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << "Naive LCM: " << lcmNaive(2, 21) << "\nEfficient LCM: " << lcmEfficient(7, 8);

    return 0;
}