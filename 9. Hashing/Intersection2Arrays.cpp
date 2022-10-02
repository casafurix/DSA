#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long

int getIntersectionNaive(int a[], int b[], int m, int n)
{
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;

        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}

int getIntersectionEff(int a[], int b[], int m, int n)
{
    // insert from first array
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
        s.insert(a[i]);

    int res = 0;
    // time for 2nd array
    for (int j = 0; j < n; j++)
    {
        // if there is common element between arr1 (a) and arr2 (b), which is also repeating in arr2 (b) itself, we remove it after incrementing res by 1. thus, the erase() method! (as we only want distinct occurrences)
        if (s.find(b[j]) != s.end())
        {
            res++;
            s.erase(b[j]);
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[] = {10, 15, 20, 15, 30, 30, 5}, b[] = {30, 5, 30, 80};
    int m = 7, n = 4;
    cout << getIntersectionNaive(a, b, m, n) << endl;
    cout << getIntersectionEff(a, b, m, n);

    return 0;
}