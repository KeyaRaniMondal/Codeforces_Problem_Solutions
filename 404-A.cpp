#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll res = 0;
    ll t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        string t = "Tetrahedron";
        string c = "Cube";
        string o = "Octahedron";
        string d = "Dodecahedron";
        string ic = "Icosahedron";
        string s;
        cin >> s;
        if (s == t)
            res += 4;
        if (s == c)
            res += 6;
        if (s == o)
            res += 8;
        if (s == d)
            res += 12;
        if (s == ic)
            res += 20;
    }
    cout << res << endl;
    return 0;
}
