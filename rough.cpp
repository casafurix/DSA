#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long findNthFibonacci(int number, long long int dp[])
{
    // Your Code Here
    long long int res;
    if (dp[number] == 0)
    {
        if (number == 0 || number == 1)
            res = number;
        else
            res = findNthFibonacci(number - 1, dp) + findNthFibonacci(number - 2, dp);

        dp[number] = res;
    }
    return dp[number];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long dp[100] = {0};
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    cout << findNthFibonacci(5, dp);

    return 0;
}