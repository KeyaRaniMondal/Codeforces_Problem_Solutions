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
        vector<long long> v(n);
        for (auto &num : v)
            cin >> num;
        vector<long long> uqH = v;
        long long elePosK = v[k - 1];
        long long maxh = *max_element(v.begin(), v.end());
        if (elePosK == maxh)
        {
            cout << "YES" << endl;
            continue;
        }

        sort(uqH.begin(), uqH.end());
        uqH.erase(unique(uqH.begin(), uqH.end()), uqH.end());

        int pos = lower_bound(uqH.begin(), uqH.end(), elePosK) - uqH.begin();
        int flag = 0;
        for (int i = pos; i < (int)uqH.size() - 1; ++i)
        {
            if (uqH[i + 1] - uqH[i] > elePosK)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
