#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    ll n;
    cin >> n;
    if (n > 0)
        cout << n << endl;
        else if(n==-10)
        cout<<0<<endl;
    else
        cout << n / 10 << endl;
    return 0;
}
