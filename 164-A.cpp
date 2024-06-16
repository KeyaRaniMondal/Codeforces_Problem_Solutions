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
    vector<int> v;
    vector<int> v1;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(a);
        v1.push_back(b);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (v[i] == v1[j])
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
