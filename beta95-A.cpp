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
    string s1;
    s1 = s;
    int flag = 0;
    if (islower(s[0]))
        s[0] = toupper(s[0]);
    else if (isupper(s[0]))
        s[0] = tolower(s[0]);
    for (int i = 1; i < s.size(); ++i)
    {
        if (islower(s[i]))
            flag = 1;
        else if (isupper(s[i]))
            s[i] = tolower(s[i]);
    }
    if (flag == 1)
        cout << s1 << endl;
    else
        cout << s << endl;
    return 0;
}
