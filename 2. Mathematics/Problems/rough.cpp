#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n == 1)
    {
        cout << "no" << endl;
        return 0;
    }

    if (n == 2 || n == 3)
    {
        cout << "yes" << endl;
        return 0;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        cout << "no" << endl;
        return 0;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        isPrime(n);
    }
    return 0;
}