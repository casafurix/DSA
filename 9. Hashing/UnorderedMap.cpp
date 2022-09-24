#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, int> m;
    m["nadal"] = 36;
    m["federer"] = 41;
    m.insert({"djokovic", 35});

    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    cout << endl;
    if (m.find("nadal") != m.end())
        cout << "Found!" << endl;
    else
        cout << "Not found!" << endl;

    cout << endl;

    for (auto it = m.begin(); it != m.end(); it++)
        cout << (it->first) << " " << (it->second) << endl;

    return 0;
}