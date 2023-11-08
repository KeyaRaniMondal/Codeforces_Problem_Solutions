#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; ++i)
    {
        int l_d = n % 10;
        if (l_d != 0)
            n -= 1;
        else
            n /= 10;
    }
    cout << n << endl;
    return 0;
}
