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
        int n = sqrt(stoi(s));
        int flag = 0;
        for (int a = 0; a <= n; ++a)
        {
            int b = n - a;
            if ((a + b) * (a + b) == stoi(s))
            {
                cout << a << " " << b << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}
