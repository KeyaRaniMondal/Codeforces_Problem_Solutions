#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &num : v)
            cin >> num;
        sort(v.begin(), v.end());
        int minE = n, maxE = -1, minO = n, maxO = -1;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] % 2 == 0)
            {
                minE = min(minE, i);
                maxE = max(maxE, i);
            }
            else
            {
                minO = min(minO, i);
                maxO = max(maxO, i);
            }
        }
        int countE = (minE <= maxE) ? (maxE - minE + 1) : 0;
        int countO = (minO <= maxO) ? (maxO - minO + 1) : 0;
        cout << n - max(countE, countO) << endl;
    }
}
