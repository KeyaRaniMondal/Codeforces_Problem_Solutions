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
        int n, mx = 0, value = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        while (n > 1)
        {
            int min_sum = INT_MAX;
            int remove = 0;
            for (int i = 0; i < n - 1; ++i)
            {
                int pair_sum = v[i] + v[i + 1];
                if (pair_sum < min_sum)
                {
                    min_sum = pair_sum;
                    remove = i;
                }
            }
            v.erase(v.begin() + remove);
            v.erase(v.begin() + remove);
            n -= 2;
        }
        cout << v[0] << endl;
    }
    return 0;
}
