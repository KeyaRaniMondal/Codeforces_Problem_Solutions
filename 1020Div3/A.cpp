#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
                count++;
        }
        cout << n + (n - 2) * count << endl;
    }
}