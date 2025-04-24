#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        long long lostB = -1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                long long X = a[i] + b[i];
                lostB = (lostB == -1 ? X : lostB);
                if (lostB != X)
                {
                    lostB = LLONG_MAX;
                    break;
                }
            }
        }

        if (lostB == LLONG_MAX)
        {
            cout << 0 << endl;
            continue;
        }

        if (lostB != -1)
        {
            long long x = lostB;
            int res = 1;
            for (int i = 0; i < n; i++)
            {
                long long be = x - a[i];
                if (be < 0 || be > k)
                {
                    res = 0;
                    break;
                }
            }
            cout << res << endl;
        }
        else
        {
            long long left = 0, right = LLONG_MAX;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > left)
                    left = a[i];
                long long upper = a[i] + k;
                if (upper < right)
                    right = upper;
            }
            if (right >= left)
                cout << right - left + 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}