#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    ll n, k;
    cin >> n >> k;
    ll a = (n + 1) / 2;
    if (a >= k)
        cout << 2 * k - 1 << endl;
    else
        cout << (k - a) * 2 << endl;
    return 0;
}