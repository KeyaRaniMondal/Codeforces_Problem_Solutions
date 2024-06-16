#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    string s, res;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < s.size(); ++i)
    {
        string sb = s.substr(0,i);
        if (sb != "WUB")
            v.push_back(sb);
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (i > 0)
        {
            res += " ";
            res += v[i];
        }
    }
    cout << res << endl;
    return 0;
}
