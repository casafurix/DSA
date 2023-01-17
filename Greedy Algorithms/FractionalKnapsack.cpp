#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

bool sortInDescending(pair<int, int> a, pair<int, int> b)
{
    double ratio1 = (double)a.first / a.second;
    double ratio2 = (double)b.first / b.second;
    return ratio1 > ratio2;
}

// example: {(120, 30), (100, 20), (60, 10)}
double knapsack(int W, pair<int, int> arr[], int n)
{
    sort(arr, arr + n, sortInDescending);
    double res = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= W)
        {
            res += arr[i].first;
            W -= arr[i].second;
        }
        else
        {
            res += arr[i].first * ((double)W / arr[i].second);
            return res;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pair<int, int> knapsackTable1[] = {{120, 30}, {100, 20}, {60, 10}};
    pair<int, int> knapsackTable2[] = {{600, 50}, {500, 20}, {400, 30}};
    int W1 = 50, n1 = 3;
    int W2 = 70, n2 = 3;

    cout << knapsack(W1, knapsackTable1, n1) << endl;
    cout << knapsack(W2, knapsackTable2, n2);

    return 0;
}