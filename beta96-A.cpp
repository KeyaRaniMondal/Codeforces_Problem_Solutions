#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            flag = 1;
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
