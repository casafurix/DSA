#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(5); // duplicate values ignored, size will still be 4, and .count() method will return 1 for element 5

    for (int x : s)
        cout << x << " ";

    cout << endl;

    for (auto iterator = s.begin(); iterator != s.end(); iterator++)
    {
        cout << *iterator << " ";
    }

    cout << endl;

    cout << s.size() << " " << endl;

    // s.clear();

    cout << s.size() << endl;

    if (s.find(15) == s.end())
        cout << "Not found!" << endl;
    else
        cout << "Found!"
             << " " << *s.find(15) << endl;

    s.erase(s.begin(), s.end());
    cout << s.size() << endl;

    return 0;
}