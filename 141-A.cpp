#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    set<ll> s;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4 - s.size() << endl;
    return 0;
}
