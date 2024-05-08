#include <bits/stdc++.h>
using namespace std;
int main()
{

   long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long area=ceil(n / a) * ceil(m / a);
    cout<<area;
    return 0;
}

