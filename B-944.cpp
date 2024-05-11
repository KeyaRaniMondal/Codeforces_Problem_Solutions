#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s1 = s;
        for (int i = 0; i < s.size() - 1; ++i)
            swap(s1[i], s1[i + 1]);
        if (s != s1)
        {
            cout << "YES" << endl;
            cout << s1 << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}