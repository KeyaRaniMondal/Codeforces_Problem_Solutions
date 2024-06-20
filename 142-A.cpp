#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll n, s;
    cin >> s >> n;
    vector<pair<ll, ll>> p(n);
    int flag = 0;
    for (ll i = 0; i < n; ++i)
        cin >> p[i].first >> p[i].second;
    sort(p.begin(), p.end());
    for (int i = 0; i < n; ++i)
    {
        if (p[i].first >= s)
        {
            cout<<"NO"<<endl;
            return 0;
            s += p[i].second;
        }
    }
        cout << "YES" << endl;
    return 0;
}
