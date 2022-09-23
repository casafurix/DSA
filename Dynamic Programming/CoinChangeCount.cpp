#include <bits/stdc++.h>
using namespace std;
#define ll long long

int coinChangeCountRec(int coins[], int n, int sum)
{
    // if sum = 0, do not pick any coin, so that is one way. Hence, return 1.
    if (sum == 0)
        return 1;

    if (n == 0)
        return 0;

    // if last coin's value is more than sum
    int res = coinChangeCountRec(coins, n - 1, sum);
    // if last coin's value is less than/equal to sum
    if (coins[n - 1] <= sum)
        res += coinChangeCountRec(coins, n, sum - coins[n - 1]);

    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int coins[] = {2, 5, 3, 6}, n = 10;
    cout << coinChangeCountRec(coins, n, 10);
    return 0;
}