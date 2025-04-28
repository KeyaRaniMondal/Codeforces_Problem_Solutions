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
        vector<long long> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<long long> preMax(n + 1, 0);
        preMax[1] = v[1];
        for (int i = 2; i <= n; i++)
        {
            preMax[i] = max(preMax[i - 1], v[i]);
        }
        vector<long long> Sum(n + 1, 0);
        for (int k = 1; k <= n; k++)
        {
            Sum[k] = Sum[k - 1] + v[n - k + 1];
        }

        vector<long long> end(n + 1);
        for (int k = 1; k <= n; k++)
        {
            long long best = Sum[k];
            if (n - k >= 1)
            {
                best = max(best, preMax[n - k] + Sum[k - 1]);
            }
            end[k] = best;
        }

        for (int k = 1; k <= n; k++)
            cout << end[k] << " ";
        cout << endl;
    }
}