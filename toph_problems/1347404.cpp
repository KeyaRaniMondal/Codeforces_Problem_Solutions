#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val, max_val = 0;
    cin >> n;
    string s = to_string(n);
    sort(s.begin(), s.end());
    if (s[0] == s[s.size() - 1])
        cout << s << endl;
    else
    {
        for (int i = 1; i < n; ++i)
        {
            string s1 = to_string(i);
            sort(s1.begin(), s1.end());
            if (s1[0] == s1[s1.size() - 1])
                val = i;
            max_val = max(max_val, val);
        }
        cout << max_val << endl;
    }
    return 0;
}