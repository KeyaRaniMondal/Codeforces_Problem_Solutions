#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    set<char> st;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i)
    {
        if (isalpha(s[i]))
            st.insert(s[i]);
    }
    cout << st.size() << endl;
    return 0;
}
