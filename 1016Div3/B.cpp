#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string d;
        cin >> d;
        long long len = d.length();
        long long max_d = 0, count = 0;
        for (char ch : d)
        {
            if (ch == '0')
                count++;
            else
                max_d = max(max_d, count + 1);
        }
        cout << len - max_d << endl;
    }
    return 0;
}
