#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    string a, b, res = "";
    cin >> a >> b;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == b[i])
            res += '0';
        else
            res += '1';
    }
    cout << res << endl;
    return 0;
}
