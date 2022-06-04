#include <bits/stdc++.h>
using namespace std;
#define ll long long

int stockBuyAndSellNaive(int price[], int start, int end)
{
    if (end <= start)
        return 0;

    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (price[j] > price[i])
            {
                int curr_profit = price[j] - price[i] + stockBuyAndSellNaive(price, start, i - 1) + stockBuyAndSellNaive(price, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int stockBuyAndSellEfficient(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit += price[i] - price[i - 1];
        }
    }
    return profit;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int price[] = {1, 5, 3, 8, 12};
    cout << stockBuyAndSellNaive(price, 0, 4);
    cout << endl;
    cout << stockBuyAndSellEfficient(price, 5);

    return 0;
}