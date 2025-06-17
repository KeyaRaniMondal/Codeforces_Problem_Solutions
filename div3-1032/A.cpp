#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (auto &num : v)
            cin >> num;
        int ans = (v[n - 1] - v[0]) + min(abs(s - v[0]), abs(s - v[n - 1]));
        cout << ans << endl;
    }
}