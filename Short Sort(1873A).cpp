#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "abc" || s == "bac" || s == "acb" || s == "cba")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
