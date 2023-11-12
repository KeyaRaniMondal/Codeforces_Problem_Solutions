#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, count = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if (s.substr(i, 3) == "xxx")
            count++;
    }
    cout << count << endl;
}
