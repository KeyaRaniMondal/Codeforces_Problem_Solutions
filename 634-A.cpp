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
        ll n, count = 0;
        cin >> n;
        // for (ll i = 1; i < n; ++i)
        // {
        //     if ((n - i) > i)
        //         count++;
        // }
        // cout << count << endl;
        if (n & 1)
            cout << n / 2 << endl;
        else
            cout << n / 2 - 1 << endl;
    }
    return 0;
}