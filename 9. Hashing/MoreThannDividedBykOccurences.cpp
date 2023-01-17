#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

void printNbyKNaive(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int i = 1, count = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            i++;
            count++;
        }
        if (count > n / k)
            cout << arr[i - 1] << " ";

        count = 1;
        i++;
    }
}

void printNbyKEff(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto e : m)
        if (e.second > n / k)
            cout << e.first << " ";
}

void printNbyKMostEff(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) == m.end() && m.size() <= k - 1)
            m.insert({arr[i], 1});
        else if (m.find(arr[i]) != m.end())
            m[arr[i]]++;
        else
        {
            if (m[arr[i]] == 1)
                m.erase(arr[i]);
            else
                m[arr[i]]--;
        }
    }

    for (int i = 0; i < m.size(); i++)
    {
        m[arr[i]]++;
    }
    for (auto e : m)
        if (e.second > n / k)
            cout << e.first << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {30, 10, 20, 30, 30, 40, 30, 40, 30}, n = 9, k = 2;
    int arr2[] = {30, 10, 20, 20, 10, 20, 30, 30}, n2 = 8, k2 = 4;
    int arr3[] = {30, 10, 20, 20, 20, 10, 40, 30, 30}, n3 = 9, k3 = 4;
    printNbyKNaive(arr, n, k);
    cout << endl;
    printNbyKNaive(arr2, n2, k2);
    cout << endl;
    printNbyKNaive(arr3, n3, k3);
    cout << endl;
    cout << endl;
    printNbyKEff(arr, n, k);
    cout << endl;
    printNbyKEff(arr2, n2, k2);
    cout << endl;
    printNbyKEff(arr3, n3, k3);
    cout << endl;
    cout << endl;
    printNbyKMostEff(arr, n, k);
    cout << endl;
    printNbyKMostEff(arr2, n2, k2);
    cout << endl;
    printNbyKMostEff(arr3, n3, k3);

    return 0;
}