#include <bits/stdc++.h>
using namespace std;
#define ll long long

void isSetLeftShift(int n, int k)
{
    if (n & (1 << (k - 1)))
        cout << "Yes";
    else
        cout << "No";
}

void isSetRightShift(int n, int k)
{
    if ((n >> (k - 1)) & 1)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    isSetLeftShift(500, 3);
    cout << "\n";
    isSetRightShift(500, 3);

    return 0;
}