#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        char arr[11][11];
        for (int i = 1; i < 11; ++i)
        {
            for (int j = 1; j < 11; ++j)
            {
                cin >> arr[i][j];
            }
        }
 
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        for (int i = 1; i < 11; ++i)
        {
            for (int j = 1; j < 11; ++j)
            {
                if (arr[i][j] == 'X')
                {
                    if (i == 1 || i == 10 || j == 1 || j == 10)
                        a++;
                    else if (i == 2 || i == 9 || j == 2 || j == 9)
                        b++;
                    else if (i == 3 || i == 8 || j == 3 || j == 8)
                        c++;
                    else if (i == 4 || i == 7 || j == 4 || j == 7)
                        d++;
                    else if (i == 5 || j == 5 || i == 6 || j == 6)
                        e++;
                }
            }
        }
        int sum = (a * 1) + (b * 2) + (c * 3) + (d * 4) + (e * 5);
        cout << sum << endl;
    }
}
