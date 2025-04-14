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
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> grid[i][j];
            }
        }

        vector<int> p(2 * n + 1, 0);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int m = i + j + 2;
                if (p[m] == 0)
                    p[m] = grid[i][j];
            }
        }
        vector<bool> marked(2 * n + 1, false);
        for (int i = 2; i <= 2 * n; ++i)
        {
            marked[p[i]] = true;
        }

        for (int i = 1; i <= 2 * n; ++i)
        {
            if (!marked[i])
            {
                p[1] = i;
                break;
            }
        }
        for (int i = 1; i <= 2 * n; ++i)
            cout << p[i] << " ";
        cout << endl;
    }

    return 0;
}
