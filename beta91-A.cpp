#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0 || n % 477 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
