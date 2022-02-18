#include <bits/stdc++.h>
using namespace std;
#define ll long long

int palindrome(int x)
{
    int orig = x;
    int rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    if (orig == rev)
        return true;
    else
        return false;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    palindrome(1013);

    return 0;
}