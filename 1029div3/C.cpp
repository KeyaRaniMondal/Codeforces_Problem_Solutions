#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), next(n);
        unordered_map<int, int> ump;

        for (auto &num : v)
            cin >> num;

        for (int i = n - 1; i >= 0; --i)
        {
            if (ump.count(v[i]))
                next[i] = ump[v[i]];
            else
                next[i] = n;
            ump[v[i]] = i;
        }

        int pos = 0, count = 0;
        while (pos < n)
        {
            int end = pos;
            while (true)
            {
                int maxi = 0;
                for (int i = pos; i <= end; ++i)
                    maxi = max(maxi, next[i]);

                count++;
                if (maxi >= n)
                    break;

                pos = end + 1;
                end = maxi;
            }
            break;
        }
        cout << count << endl;
    }
}
