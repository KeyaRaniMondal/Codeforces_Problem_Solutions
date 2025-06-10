#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, flag = -1, one = -1;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &num : v)
            cin >> num;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 1)
            {
                if (one == -1)
                    one = i;
                flag = i;
            }
        }
        if (one == -1)
            cout << "YES" << endl;
        else
        {
            if ((flag - one) + 1 <= x)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}