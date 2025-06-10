// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;++i)
//         cin>>arr[i];
//         for(int i=0;i<n-1;++i)
//         {
//             if(arr[i])
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int m = n - 1;
        vector<vector<int>> imp(m + 1);
        vector<pair<int, bool>> units;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0) {
                if (i > 1) units.emplace_back(i - 1, true);
                if (i < n) units.emplace_back(i, false);
            } else {
                if (i == 1) {
                    units.emplace_back(1, true);
                } else if (i == n) {
                    units.emplace_back(n - 1, false);
                } else {
                    imp[i - 1].push_back(i);
                }
            }
        }
        vector<int> assign(m + 1, -1);
        deque<pair<int, bool>> dq;
        for (auto &u: units) dq.push_back(u);
        bool bad = false;
        while (!dq.empty() && !bad) {
            auto p = dq.front();
            dq.pop_front();
            int v = p.first;
            bool val = p.second;
            if (assign[v] != -1) {
                if (assign[v] != (val ? 1 : 0)) {
                    bad = true;
                }
                continue;
            }
            assign[v] = val ? 1 : 0;
            if (val) {
                for (int to : imp[v]) {
                    dq.emplace_back(to, true);
                }
            }
        }
        cout << (bad ? "YES\n" : "NO\n");
    }
    return 0;
}

