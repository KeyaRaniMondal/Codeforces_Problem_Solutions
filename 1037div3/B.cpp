#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &num : v)
            cin >> num;
        vector<int> prefix_sum(n + 1);
        for (int i = 0; i < n; ++i)
            prefix_sum[i + 1] = prefix_sum[i] + v[i];
        for (int i = 0; i <= n - k;)
        {
            if (prefix_sum[i + k] - prefix_sum[i] == 0)
            {
                count++;
                i += k + 1;
            }
            else
                i++;
        }
        cout << count << endl;
    }
}