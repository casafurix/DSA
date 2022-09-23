#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct myHash
{
    int *arr, cap, size;
    myHash(int c)
    {
        cap = c;
        size = 0;
        for (int i = 0; i < c; i++)
        {
            arr[i] = -1;
        }
    };

    int hash(int key)
    {
        return (key % cap);
    }

    bool search(int key)
    {
        int h = hash(key);
        int i = h;

        while (arr[i] != -1)
        {
            // key found
            if (arr[i] == key)
                return true;
            // traversing in circular manner
            i = (i + 1) % cap;
            // if entire array traversed and still no key, that is, i is back to original h position
            if (i == h)
                return false;
        }
        return false;
    }

    bool insert(int key)
    {
        if (size == cap)
            return false;
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
        {
            i = (i + 1) % cap;
            if (arr[i] == key)
                return false;
            else
            {
                arr[i] = key;
                size++;
                return true;
            }
        }
    }

    bool erase(int key)
    {
        int h = hash(key);
        int i = h;

        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;

            if (i == h)
                return false;
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}