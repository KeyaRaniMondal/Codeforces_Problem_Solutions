#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> two_pair;
    string max_str = "";
    int count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        two_pair[s.substr(i, 2)]++;
    }
    for (auto x : two_pair)
    {
        if (x.second > count)
        {
            count = x.second;
            max_str = x.first;
        }
    }
    cout << max_str << endl;
    return 0;
}
