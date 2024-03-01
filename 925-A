#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v(27);
        char ch = 'a';
        for (int i = 1; i <= 26; i++)
        {
            v[i] = ch++;
        }
        if (n <= 28)
        {
            int check = n - 2;
            cout << "aa" << v[check] << endl;
        }
        else if (n <= 53)
        {
            n -= 26;
            int check = n - 1;
            cout << "a" << v[check] << "z" << endl;
        }
        else
        {
            n -= 52;
            int check = n;
            cout << v[check] << "zz" << endl;
        }
    }
}
