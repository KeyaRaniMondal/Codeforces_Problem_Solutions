/*This is codeforces problem Download More RAM solved in cpp programming language*/
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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i].second;
        }
        sort(v.begin(), v.end());
        int RAM = k;
        for (int i = 0; i < n; ++i)
        {
            // cout<<v[i].first<<" "<<v[i].second<<endl;
            if (RAM < v[i].first)
                break;
            RAM += v[i].second;
        }
        cout << RAM << endl;
    }
}
