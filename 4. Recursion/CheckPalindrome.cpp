#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;

    return (str[start] == str[end] && isPalindrome(str, start + 1, end - 1));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    int start = 0, end = str.length() - 1;
    cout << isPalindrome(str, start, end);

    return 0;
}