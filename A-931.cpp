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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long result = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                for (int k = 0; k < n; ++k)
                {
                    for (int l = 0; l < n; ++l)
                    {
                        if ((i != j && i != k) && (i != l && j != k) && (j != l && k != l))
                        {
                            result = max(result, abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[k] - a[l]) + abs(a[l] - a[i]));
                        }
                    }
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}

