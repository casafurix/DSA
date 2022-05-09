#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string ans1 = "";
        string ans2 = "";
        if (x % 2 != 0 && y % 2 != 0)
        {
            cout << -1;
        }
        else if (x == 1 || y == 1)
        {
            cout << -1;
        }
        else
        {
            if (((x % 2 != 0) && (y % 2 == 0)))
            {

                for (int i = 0; i < x + y; i++)
                {
                    if (i % 2 == 0)
                    {
                        ans1 = ans1 + "a";
                    }
                    else
                    {
                        ans1 = ans1 + "b";
                    }
                }
                int evencheck = 0;
                int last = x + y - 1;
                for (int i = y / 2; i < (y / 2) + x; i++)
                {
                    ans2 = ans2 + "a";
                }
                while (evencheck < y)
                {
                    ans2 = ans2 + "b";
                    ans2 = "b" + ans2;
                    evencheck += 2;
                }
            }
            else if (((x % 2 == 0) && (y % 2 != 0)))
            {

                for (int i = 0; i < x + y; i++)
                {
                    if (i % 2 == 0)
                    {
                        ans1 = ans1 + "b";
                    }
                    else
                    {
                        ans1 = ans1 + "a";
                    }
                }
                int evencheck = 0;
                int last = x + y - 1;
                for (int i = x / 2; i < (x / 2) + y; i++)
                {
                    ans2 = ans2 + "b";
                }
                while (evencheck < x)
                {
                    ans2 = ans2 + "a";
                    ans2 = "a" + ans2;
                    evencheck += 2;
                }
            }
            else
            {
                for (int i = 0; i < y; i++)
                {
                    ans1 = ans1 + "b";
                }
                int even2 = 0;
                while (even2 < x)
                {
                    ans1 = "a" + ans1;
                    ans1 = ans1 + "a";
                    even2 += 2;
                }
                for (int i = 0; i < x; i++)
                {
                    ans2 = ans2 + "a";
                }
                int bcount = 0;
                while (bcount < y)
                {
                    ans2 = "b" + ans2;
                    ans2 = ans2 + "b";
                    bcount += 2;
                }
            }

            cout << ans1 << "\n"
                 << ans2;
        }
        cout << "\n";
    }
    return 0;
}