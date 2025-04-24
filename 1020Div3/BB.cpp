#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        for (int i = 0; i <= x - 1; ++i)
        {
            if (i != x)
                cout << i << " ";
        }
        for (int i = x + 1; i <= n - 1; ++i)
        {
            if (i != n)
                cout << i << " ";
        }
        if (x != n)
            cout << x << endl;
        else
            cout << endl;
    }
}