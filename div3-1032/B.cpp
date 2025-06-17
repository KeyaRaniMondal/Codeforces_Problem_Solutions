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
        string s;
        cin >> s;
        unordered_map<int, int> ump;
        for (char ch : s)
            ump[ch - 'a']++;
        for (int i = 1; i < n - 1; ++i)
        {
            if (ump[s[i] - 'a'] >= 2)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}