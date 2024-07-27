#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

void reduce_grid(vector<string> &grid, int n, int k)
{
    int r_s = n / k;
    vector<string> reduced_grid(r_s, string(r_s, '0'));
    for (int i = 0; i < n; i += k)
    {
        for (int j = 0; j < n; j += k)
        {
            char value = grid[i][j];
            int reduced_i = i / k;
            int reduced_j = j / k;
            reduced_grid[reduced_i][reduced_j] = value;
        }
    }
    for (const auto &row : reduced_grid)
    {
        cout << row << endl;
    }
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> grid(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }
        reduce_grid(grid, n, k);
    }
    return 0;
}
