#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

bool check(int s, int e, int p)
{
    if (s <= e)
        return p >= s && p <= e;
    else
        return p >= s || p <= e;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int a1 = min(a, b);
        int b1 = max(a, b);
        int c1 = min(c, d);
        int d1 = max(c, d);
        if (check(a1, b1, c1) != check(a1, b1, d1) || check(c1, d1, a1) != check(c1, d1, b1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
