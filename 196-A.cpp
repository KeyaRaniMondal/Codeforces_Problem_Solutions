#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
    int mn=INT_MAX,mi;
    for (int i = 0; i < m; ++i)
    {
        mi =v[i + 1] - v[i];
        mi=min(mn,mi);
    }
    cout <<mi<< endl;
    return 0;
}