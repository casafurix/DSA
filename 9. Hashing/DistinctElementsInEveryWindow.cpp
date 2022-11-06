#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

void distinctElements(int arr[], int n, int k)
{
    for (int i = 0; i <= n - k; i++)
    {
        int count = 0;
        for (int j = 0; j < k; j++)
        {
            bool flag = false;
            for (int p = 0; p < j; p++)
            {
                if (arr[i + p] == arr[i + j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                count++;
            }
        }
        cout << count << " ";
    }
}

void distinctElementsEff(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < k; i++)
        m[arr[i]]++;
    cout << m.size() << " ";

    for (int i = k; i < n; i++)
    {
        if (m[arr[i - k]] != 1)
        {
            m[arr[i - k]]--;
        }
        else
            m.erase(arr[i - k]);

        if (m.find(arr[i]) == m.end())
        {
            m.insert({arr[i], 1});
        }
        else
        {
            m[arr[i]]++;
        }
        cout << m.size() << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {10, 20, 20, 10, 30, 40, 10}, n = 7, k = 4;
    distinctElements(arr, n, k);
    cout << endl;
    distinctElementsEff(arr, n, k);

    return 0;
}