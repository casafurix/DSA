#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countBits1(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int countBits2(int n)
{
    int count = 0;
    if (n % 2)
        count++;
    n = n / 2;
}
int countBitsBK(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << countBits1(5);
    cout << "\n";
    cout << countBits2(5);
    cout << "\n";
    cout << countBitsBK(5);

    return 0;
}