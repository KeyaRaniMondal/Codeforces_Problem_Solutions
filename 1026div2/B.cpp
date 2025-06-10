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
        int count = 0, flag = 0;
        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (s[i] == '(')
                count++;
            else
                count--;
            if (count == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
