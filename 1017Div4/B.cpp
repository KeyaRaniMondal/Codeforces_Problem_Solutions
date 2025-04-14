#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int ln = -l;
        int lm = (m < ln ? m : ln);
        int rm = m - lm;
        cout << -lm << " " << rm << endl;
    }
    return 0;
}
