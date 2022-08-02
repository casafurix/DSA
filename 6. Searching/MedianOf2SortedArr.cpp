#include <bits/stdc++.h>
using namespace std;
#define ll long long

float getMedianNaive(vector<int> a1, vector<int> a2)
{
    a1.insert(a1.end(), a2.begin(), a2.end());
    sort(a1.begin(), a1.end());
    int low = 0, high = a1.size() - 1;
    int mid = (low + high) / 2;
    if (a1.size() % 2 == 0)
        return float(a1[mid] + a1[mid + 1]) / 2;
    else
        return float(a1[mid]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a1 = {10, 20, 30, 40, 50};
    vector<int> a2 = {5, 15, 25, 35, 45};
    cout << getMedianNaive(a1, a2);

    return 0;
}