#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

int getUnionNaive(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }

    int res = 0;
    for (int i = 0; i < m + n; i++)
    {
        // to avoid duplicates
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (c[i] == c[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            res++;
    }

    return res;
}

int getUnionEff(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        s.insert(b[j]);
    }
    return s.size();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int a[] = {15, 20, 5, 15}, b[] = {15, 15, 15, 20, 10};
    // int m = 4, n = 5;

    // int m = 3, n = 2;
    // int a[] = {10, 12, 15}, b[] = {18, 12};

    int m = 3, n = 2;
    int a[] = {3, 3, 3}, b[] = {3, 3};
    cout << getUnionEff(a, b, m, n) << endl;
    cout << getUnionNaive(a, b, m, n);

    return 0;
}