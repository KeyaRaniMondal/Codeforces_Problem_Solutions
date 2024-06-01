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
        int c = 1;
        bool flag = 0;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] == '1' && s[i - 1] == '0')
            {
                if (flag == 0)
                    flag = 1;
                else
                    c++;
            }
            else if (s[i] == '0' && s[i - 1] == '1')
                c++;
        }
        cout << c <<endl;
    }
    return 0;
}