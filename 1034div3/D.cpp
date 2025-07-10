#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, one = 0, zero = 0, flag = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (auto &ch : s)
        {
            if (ch == '1')
                one++;
        }
        if (one <= k)
        {
            cout << "Alice" << endl;
            continue;
        }
        for (auto &ch : s)
        {
            if (ch == '0')
                zero++;
            if (zero >= k)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1 || 2 * k <= n)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}