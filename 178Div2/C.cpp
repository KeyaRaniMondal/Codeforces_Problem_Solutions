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
        string s;
        cin >> s;

        vector<int> A, B;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'A')
                A.push_back(i + 1);
            else
                B.push_back(i + 1);
        }

        bool alice = false;
        for (auto &a : A)
        {
            bool bob = false;
            if (a == 1)
            {
                for (auto &b : B)
                {
                    if (2 <= b && b <= n - 1)
                    {
                        bob = true;
                        break;
                    }
                }
            }

            else if (a == n)
            {
                for (auto &b : B)
                {
                    if (b == 1)
                    {
                        bob = true;
                        break;
                    }
                }
            }
            else
            {
                for (auto &b : B)
                {
                    if (b > a)
                    {
                        bob = true;
                        break;
                    }
                }
            }
            if (!bob)
            {
                alice = true;
                break;
            }
        }

        if (alice)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}
