// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)

// int main()
// {
//     fio;
//     int n;
//     cin >> n;
//     int phy[3][n];
//     for (int i = 0; i < n; ++i)
//     {
//         int x, y, z;
//         cin >> x >> y >> z;
//         phy[0][i] = x;
//         phy[1][i] = y;
//         phy[2][i] = z;
//     }
//     int sum1 = 0, sum2 = 0, sum3 = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         sum1 += phy[0][i];
//         sum2 += phy[1][i];
//         sum3 += phy[2][i];
//     }
//     if (sum1 == 0 && sum2 == 0 && sum3 == 0)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fio;
    int n;
    cin >> n;
    vector<vector<int>>phy(3,vector<int>(n));//declaretion of 2D vector
    for (int i = 0; i < n; ++i)
    {
        int x, y, z;
        cin >> x >> y >> z;
        phy[0][i] = x;
        phy[1][i] = y;
        phy[2][i] = z;
    }
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; ++i)
    {
        sum1 += phy[0][i];
        sum2 += phy[1][i];
        sum3 += phy[2][i];
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}