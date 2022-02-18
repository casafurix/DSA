#include <bits/stdc++.h>
using namespace std;
#define ll long long

int digitsInFactorial(int N)
{
    double count = 0;
    if (N < 0)
        return 0;
    if (N <= 1)
        return 1;
    for (int i = 2; i <= N; i++)
    {
        count = count + log10(i);
    }
    return floor(count) + 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << digitsInFactorial(5);

    return 0;
}