#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    ll n, k, val;
    cin >> n >> k;
    k = k - 1;
    vector<ll> v;
    for (ll i = 1; i <= n; i += 2)
        v.push_back(i);
    for (ll i = 2; i <= n; i += 2)
        v.push_back(i);
    // for (ll i = 0; i < n; ++i)
    // {
    //    // cout << v[i] << " ";
    //     if (k == v[i])
    //         val = v[i];
    // }
    val=v[k];
    cout << val << endl;
    return 0;
}