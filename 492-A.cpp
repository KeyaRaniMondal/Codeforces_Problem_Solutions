#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
int main()
{
    fio;
    ll n, count = 0;
    cin >> n;
    while (n != 0)
    {
        if (n > 100)
        {
            n /= 100;
            count++;
            n = n % 100;
        }
        if (n > 20)
        {
            n /= 20;
            count++;
            n = n % 20;
        }
        if (n > 10)
        {
            n /= 10;
            count++;
            n = n % 10;
        }
         if (n > 5)
        {
            n /= 5;
            count++;
            n = n % 5;
        }
        else
        {
            n /= 1;
            count++;
            n = n % 1;
        }
    }
    cout << count << endl;
    return 0;
}
