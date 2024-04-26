#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, big, end, sum = 0;
    cin >> n >> big >> end;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    for (int i = big; i <= end; ++i)
    {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}