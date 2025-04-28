#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> interval(n);
        bool shower = false;
        for (int i = 0; i < n; ++i)
        {
            cin >> interval[i].first >> interval[i].second;
        }
        sort(interval.begin(), interval.end());
        if (interval[0].first >= s)
        {
            shower = true;
        }
        for (int i = 1; i < n; ++i)
        {
            if (interval[i].first - interval[i - 1].second >= s)
            {
                shower = true;
            }
        }
        if (m - interval.back().second >= s)
        {
            shower = true;
        }
        if (shower)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
