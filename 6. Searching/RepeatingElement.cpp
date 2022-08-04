#include <bits/stdc++.h>
using namespace std;
#define ll long long

// O(n^2)
int searchRepeatingNaive(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                return arr[j];
        }
    }
    return -1;
}

// originally, sorting wasn't allowed (changing order of array in any way), so this technique is kinda incorrect, but okay!
// O(n*logn)
int searchRepeatingLilEff(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
    return -1;
}

int searchRepeatingEff(vector<int> arr)
{
    // we don't need bool array of arr.size(), as we will get our repeating element before reaching arr.size() length of array!
    vector<bool> visited(arr.size() - 2, false);

    for (int i = 0; i < arr.size(); i++)
    {
        if (visited[arr[i]])
            return arr[i];

        visited[arr[i]] = true;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr = {0, 2, 1, 3, 2, 2};
    vector<int> arr2 = {1, 2, 3, 0, 3, 4, 5};
    vector<int> arr3 = {0, 0};
    vector<int> arr4 = {0, 1, 2, 3, 3, 4, 5};

    cout << searchRepeatingNaive(arr) << endl;
    cout << searchRepeatingNaive(arr2) << endl;
    cout << searchRepeatingNaive(arr3) << endl
         << endl;

    cout << searchRepeatingLilEff(arr) << endl;
    cout << searchRepeatingLilEff(arr2) << endl;
    cout << searchRepeatingLilEff(arr3) << endl
         << endl;

    cout << searchRepeatingEff(arr) << endl;
    cout << searchRepeatingEff(arr2) << endl;
    cout << searchRepeatingEff(arr3) << endl;
    cout << searchRepeatingEff(arr4) << endl
         << endl;

    return 0;
}