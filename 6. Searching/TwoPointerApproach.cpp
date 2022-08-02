#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPair(vector<int> arr, int sum, int low, int high)
{
    // low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        if (arr[low] + arr[high] == sum)
            return 1;
        else if (arr[low] + arr[high] < sum)
            low++;
        else
            high--;
    }
    return 0;
}

bool isTripletNaive(vector<int> arr, int sum)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                    return true;
            }
        }
    }
    return false;
}

bool isTripletEff(vector<int> arr, int sum)
{
    // for each element from the start, find a pair to see if it equals the sum, else return false
    for (int i = 0; i < arr.size(); i++)
    {
        if (isPair(arr, sum - arr[i], i + 1, arr.size() - 1))
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {2, 5, 8, 12, 30};
    int sum = 18;

    vector<int> arr2 = {2, 3, 4, 8, 9, 20, 40};
    int sum2 = 32;

    cout << isPair(arr, sum, 0, arr.size() - 1) << endl
         << endl;

    cout << isTripletEff(arr2, sum2) << endl;
    cout << isTripletEff(arr, 19) << endl
         << endl;

    cout << isTripletNaive(arr2, sum2) << endl;
    cout << isTripletNaive(arr, 19) << endl
         << endl;

    return 0;
}