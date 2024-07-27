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
        ll n;
        cin >> n;
        ll n1 = n;
        if (n % 4 == 0)
        {
            cout << n / 4 << endl;
        }
        else
        {
            ll n1 = n / 4;
            if (n % 4 == 2)
                cout << n1 + 1 << endl;
            else
                cout << n1 << endl;
        }
    }
    return 0;
}
