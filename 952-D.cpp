#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, hsh = 0, h = 0;
        cin >> n >> m;
        char a[n][m];
        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
                cin >> a[i][j];
        }
        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
            {
                if (a[i][j] == '#')
                {
                    hsh++;
                    h = max(h, hsh);
                }
                cout << h / 2;
            }
        }
    }
    return 0;
}