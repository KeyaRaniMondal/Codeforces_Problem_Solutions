#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        int arr[n];
        int max = 0, flag = 0;
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        if (arr[j - 1] == max)
            flag = 1;

        if (k >= 2)
            cout << "YES" << endl;
        else
        {
            if (flag == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}