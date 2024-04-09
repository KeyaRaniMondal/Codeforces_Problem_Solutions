#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> sq(n * n);
        for (int i = 0; i < n * n; ++i)
        {
            cin >> sq[i];
        }
        sort(sq.begin(), sq.end());
        int min = sq[0];
        vector<vector<int>> mat(n, vector<int>(n));
        mat[0][0] = min;
        int k = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == 0 && j == 0)
                    continue;
                if (j == 0)
                    mat[i][j] = mat[i - 1][j] + c;
                else
                    mat[i][j] = mat[i][j - 1] + d;
            }
        }
        vector<int> res(n * n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                res[k++] = mat[i][j];
            }
        }
        sort(res.begin(), res.end());
        if (sq == res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
