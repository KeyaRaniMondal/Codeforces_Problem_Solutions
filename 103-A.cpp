#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    int n, count = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] > v[i + 1])
        {
            v[0] = v[i];
            count++;
        }
        if (v[i] < v[i + 1])
        {
            v[n - 1] = v[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}