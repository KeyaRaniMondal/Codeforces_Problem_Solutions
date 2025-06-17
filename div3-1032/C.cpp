#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int adj[n][m];
        int gmax = 0, secondMax = 0, res = INT_MAX;
        vector<int> rmax(n, 0), cmax(m, 0);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> adj[i][j];
                gmax = max(gmax, adj[i][j]);
            }
        }
        map<int, int> mp;
        for (auto &row : adj)
        {
            for (int num : row)
            {
                mp[num]++;
            }
        }
        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            int num = it->first;
            if (num != gmax)
                secondMax = max(secondMax, num);
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (adj[i][j] == gmax)
                {
                    rmax[i]++;
                    cmax[j]++;
                }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int ch = rmax[i] + cmax[j];
                if (adj[i][j] == gmax)
                    ch--;

                int reducedMax = gmax;
                if ((ch == mp[gmax]))
                    reducedMax = max(secondMax, gmax - 1);
                else
                    reducedMax = max(gmax, gmax - 1);

                res = min(res, reducedMax);
            }
        }
        cout << res << endl;
    }
}