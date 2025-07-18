#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<pair<long long, pair<long long, long long>>> v(n);
        priority_queue<long long> pq;
        for (int i = 0; i < n; i++)
        {
            long long l, r, x;
            cin >> l >> r >> x;
            v[i] = {l, {r, x}};
        }
        sort(v.begin(), v.end());
        long long current = k, idx = 0;
        while (true)
        {
            while (idx < n && v[idx].first <= current)
            {
                pq.push(v[idx].second.second);
                idx++;
            }
            while (!pq.empty() && pq.top() <= current)
                pq.pop();
            if (pq.empty())
                break;
            current = pq.top();
            pq.pop();
        }
        cout << current << endl;
    }
}
