#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }
    double per = (double)sum / n;
    cout << fixed << setprecision(12) << per << endl;
    return 0;
}