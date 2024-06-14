#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    ll n, sum = 0, count = 0, pick = 0;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for (ll i = 0; i < n; ++i)
    {
        if (pick > sum - pick)
            break;
        pick += v[i];
        count++;
    }
    cout << count << endl;

    return 0;
}
