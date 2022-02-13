#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printDivisorsNaive(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

void printDivisorsEffUnsorted(int n)
{

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}

// void printDivisorsEffSorted(int n)
// {
//     for (int i = 1; i <= n ^ (1 / 2); i++)
//     {
//         if (n % i == 0)
//             cout << i << " ";
//     }
//     for (int i = n ^ (1 / 2); i >= 1; i--)
//     {
//         if (n % i == 0 && i != n / i)
//         {
//             cout << (n / i) << " ";
//         }
//     }
// }

void printDivisorsEffSorted(int n)
{
    int i = 1;
    for (; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    printDivisorsNaive(100);
    cout << "\n";
    printDivisorsEffUnsorted(100);
    cout << "\n";
    printDivisorsEffSorted(100);

    return 0;
}