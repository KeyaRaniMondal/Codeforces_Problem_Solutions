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
    set<int> s;
    int p;
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        int vp;
        cin >> vp;
        s.insert(vp);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int vq;
        cin >> vq;
        s.insert(vq);
    }
    if (s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}