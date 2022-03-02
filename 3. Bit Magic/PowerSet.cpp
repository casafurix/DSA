#include <bits/stdc++.h>
using namespace std;
#define ll long long

int pow(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
}

void powerSet(string s)
{
    int n = s.length();
    int powSize = pow(2, n);
    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1 << j)) != 0)
                cout << s[j];
        }
        cout << "\n";
    }
}

int main()
{

    powerSet("abc");

    return 0;
}