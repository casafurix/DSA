#include <bits/stdc++.h>
using namespace std;
#define ll long long

// TC: 2**n
int lcsNaive(string s1, string s2, int m, int n)
{

    if (m == 0 || n == 0)
        return 0;

    if (s1[m - 1] == s2[n - 1])
        return 1 + lcsNaive(s1, s2, m - 1, n - 1);
    else
        return max(lcsNaive(s1, s2, m - 1, n), lcsNaive(s1, s2, m, n - 1));
}

// TC: m*n
int lcsMemo(string s1, string s2, int m, int n)
{
    vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1));

    if (memo[m][n] != -1)
        return memo[m][n];

    if (m == 0 || n == 0)
        memo[m][n] = 0;

    else
    {
        if (s1[m - 1] == s2[n - 1])
            memo[m][n] = 1 + lcsMemo(s1, s2, m - 1, n - 1);

        else
            memo[m][n] = max(lcsMemo(s1, s2, m - 1, n), lcsMemo(s1, s2, m, n - 1));
    }
    return memo[m][n];
}

// TC: m*n
int lcsTab(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = 0;
    }

    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << lcsNaive("AGNIBHA", "MESSI", 7, 5) << endl;
    cout << lcsMemo("AGNIBHA", "MESSI", 7, 5) << endl;
    cout << lcsTab("AGNIBHA", "MESSI");

    return 0;
}