#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        long long a1 = *min_element(a.begin(), a.end());
        long long b1 = *min_element(b.begin(), b.end());
        // cout<<a1<<" "<<b1;
        long long count = 0;
        for (int i = 0; i < n; ++i)
        {
            count += max((a[i] - a1), (b[i] - b1));
        }
        cout << count << endl;
    }
}
