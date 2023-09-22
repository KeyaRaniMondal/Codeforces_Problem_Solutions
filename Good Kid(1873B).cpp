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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        arr[0] = arr[0] + 1;
        int sum = 1;
        for (int i = 0; i < n; ++i)
        {
            sum *= arr[i];
        }
        cout << sum << endl;
    }
}
