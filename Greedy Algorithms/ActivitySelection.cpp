#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

void compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int maxActivities(pair<int, int> arr[], int n)
{
    sort(arr, arr + n, compare);
    int prev = 0;
    int res = 1;

    for (int curr = 1; curr < n; curr++)
    {
        if (arr[curr].first >= arr[prev].second)
        {
            res++;
            prev = curr;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pair<int, int> arr[] = {(10, 20), (12, 25), (20, 30)};

    return 0;
}