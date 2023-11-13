#include <bits/stdc++.h>
using namespace std;

string reversingEncryption(int n, string s)
{
    string s1 = s;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            reverse(s1.begin(), s1.begin() + i);
    }
    return s1;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;

    cout << reversingEncryption(n, s) << endl;
    return 0;
}
