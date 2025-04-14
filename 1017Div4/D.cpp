#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;
        int count = 1;
        for (int i = 0; i < p.length(); ++i)
        {
            for (int j = 0; j < s.length(); ++j)
            {
                if (j + 1 < s.length() && s[j] == s[j + 1])
                    count++;
            }
        }
        if (count > 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
