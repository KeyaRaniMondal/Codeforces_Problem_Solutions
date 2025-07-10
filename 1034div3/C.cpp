#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mini = INT_MAX, maxi = INT_MIN;
        cin >> n;
        vector<long long> v(n), premin(n), sufmax(n);
        for (auto &num : v)
            cin >> num;
        premin[0] = v[0];
        sufmax[n - 1] = v[n - 1];
        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        for (int i = 1; i < n; ++i)
            premin[i] = min(premin[i - 1], v[i]);

        for (int i = n - 2; i >= 0; --i)
            sufmax[i] = max(sufmax[i + 1], v[i]);
        string str = "";
        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
                mini = INT_MAX;
            else
                mini = premin[i - 1];

            if (i == n - 1)
                maxi = INT_MIN;
            else
                maxi = sufmax[i + 1];

            if (v[i] < mini || v[i] > maxi)
                str += '1';
            else
                str += '0';
        }
        cout << str << endl;
    }
}
