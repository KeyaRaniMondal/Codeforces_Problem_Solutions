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
    string s1 = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == s1[j])
            j++;
        if (j == s1.size())
            break;
    }

    if (j == s1.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
