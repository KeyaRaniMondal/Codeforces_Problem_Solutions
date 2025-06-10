#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        int dine = n / p;
        if (n % p == 0)
        {
            if (m == dine * q)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}