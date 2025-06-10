#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &num : v)
            cin >> num;
        int a = v[1] - v[0];
        for (int i = 2; i < n; ++i)
        {
            if (v[i] - v[i - 1] != a)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "NO" << endl;

        else if ((v[0] - a) < 0 || (v[0] - a) % (n + 1) != 0)
            cout << "NO" << endl;
        else
        {
            if (((v[0] - a) / (n + 1)) + a >= 0 && ((v[0] - a) / (n + 1)) >= 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}