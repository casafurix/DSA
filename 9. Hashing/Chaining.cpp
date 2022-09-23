#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct myHash
{
    int bucket;
    list<int> *table;

    myHash(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }

    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }

    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }

    bool search(int key)
    {
        int i = key % bucket;
        for (auto x : table[i])
        {
            if (x == key)
                return true;
            return false;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}