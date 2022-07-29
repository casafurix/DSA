#include <bits/stdc++.h>
using namespace std;
#define ll long long

int squareRootNaive(int x)
{
    int i = 1;
    while (i * i <= x)
    {
        i++;
    }
    return i - 1;
}

int squareRootEff(int x)
{
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midSquare = mid * mid;
        if (midSquare == x)
            return mid;
        else if (midSquare > x)
            high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << squareRootNaive(10) << endl;
    cout << squareRootEff(10) << endl;
    cout << squareRootEff(49) << endl;

    return 0;
}