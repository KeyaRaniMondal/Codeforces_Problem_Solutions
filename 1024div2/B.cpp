#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &num : v)
            cin >> num;
        int x = abs(v[0]);
        for (int i = 0; i < n; ++i)
        {
            if (abs(v[i]) <= x)
                count++;
        }
        if (count <= (n / 2) + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}