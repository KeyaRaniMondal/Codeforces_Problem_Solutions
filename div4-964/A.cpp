#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, rem = 0;
        cin >> n;
        while (n > 0)
        {
            rem += n % 10;
            n /= 10;
        }
        cout << rem << endl;
    }
    return 0;
}