#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (b < (2 * a))
        {
            int one = n / 2;
            cout << (one * b) + (a * (n % 2)) << endl;
        }
        else
            cout << (n * a) << endl;
    }
}