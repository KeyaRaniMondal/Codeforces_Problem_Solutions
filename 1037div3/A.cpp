#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<bool> v(10, false);
        for (auto &ch : s)
            v[ch - '0'] = true;
        for (int i = 0; i < 10; ++i)
        {
            if (v[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
}