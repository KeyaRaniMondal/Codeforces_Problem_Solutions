#include <bits/stdc++.h>
using namespace std;

bool checkPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        int k;
        cin >> x >> k;
        if (k > 1)
            cout << "NO" << endl;
        else
        {
            if (checkPrime(x))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
