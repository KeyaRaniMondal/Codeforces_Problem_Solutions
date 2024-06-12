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
        ll n,m, maxi, mini;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> v[i];
        ll M = INT_MIN;
        for (int i = 1; i <= n; ++i)
        {
            maxi = max(v[i], v[i + 1]);
            cout << maxi << " ";
                      m=min(v[i], v[i + 1]);
                      cout<<m<<" ";
                      mini=m;
        }
                   mini = min(maxi, mini);
        cout << m << endl;
    }
    return 0;
}
