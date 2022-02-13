#include <bits/stdc++.h>
using namespace std;
#define ll long long

void threeDivisors(int n)
{
    int count = 0, i = 1;
    for (; i * i < n; i++)
    {
        if (n % i == 0)
            count++;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            count++;
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    threeDivisors(100);

    return 0;
}