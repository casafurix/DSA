#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << sumOfDigits(9987) << "\n";
    cout << sumOfDigits(253);

    return 0;
}