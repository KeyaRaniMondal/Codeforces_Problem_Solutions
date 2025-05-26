#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int z = count(s.begin(), s.end(), '0');
        int o = n - z;
        int pair = n / 2;
        int no = pair - k;

        if (min(z, o) < no)
        {
            cout << "NO" << endl;
            continue;
        }

        int goodZ = (z - no)/2;
        int goodO = (o - no)/2;

        if ((goodZ + goodO) >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
