#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string a, b, pre = "";
        cin >> n >> m >> a >> b;
        int k = 0;
        char ch = a[0];
        for (int i = 0; i < m; ++i)
        {
            if (b[i] == ch)
            {
                pre += ch;
                k++;
                ch = a[k];
            }
        }
        cout << pre.size() << endl;
    }
    return 0;
}
