#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> h(n);
    for (ll i = 0; i < n; ++i)
        cin >> h[i];
    ll maxh = *max_element(h.begin(), h.end());
    ll max_pos = -1;
    for (ll i = 0; i < n; ++i)
    {
        if (h[i] == maxh)
        {
            max_pos = i;
            break;
        }
    }
    ll minh = *min_element(h.begin(), h.end());
    ll min_pos = -1;
    for (ll i = n - 1; i >= 0; --i)
    {
        if (h[i] == minh)
        {
            min_pos = i;
            break;
        }
    }
    ll swap = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos)
    {
        swap--;
    }
    cout << swap << endl;
    return 0;
}