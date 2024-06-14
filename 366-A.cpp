#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int n;
    cin >> n;
    string res = " ";
    for (int i = 1; i <= n; ++i)
    {
        if (i & 1)
        {
            if (i == n)
                res += "I hate it";
            else
                res += "I hate that ";
        }
        else
        {
            if (i == n)
                res += "I love it";
            else
                res += "I love that ";
        }
    }
    cout << res << endl;
    return 0;
}
