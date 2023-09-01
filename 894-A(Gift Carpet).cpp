#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<string> gift(r);
        for (int i = 0; i < r; ++i)
        {
            cin >> gift[i];
        }
        string like = "vika";
        int count = 0;
        for (int i = 0; i < c; ++i)
        {
            for (auto carpet : gift)
            {
                if (carpet[i] == like[count])
                {
                    count++;
                    break;
                }
            }
            if (count == 4)
                break;
        }
        if (count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
