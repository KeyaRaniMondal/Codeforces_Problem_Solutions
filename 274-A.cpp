#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int a, b, c;
    cin >> a >> b >> c;
    int sum1 = a + b * c;
    int sum2 = a * (b + c);
    int sum3 = a * b * c;
    int sum4 = (a + b) * c;
    int sum5=a+b+c;
    int m1 = max(sum1, sum2);
    int m2 = max(sum3, sum4);
    int m3=max(m1,sum5);
    cout << max(m2, m3) << endl;
    return 0;
}