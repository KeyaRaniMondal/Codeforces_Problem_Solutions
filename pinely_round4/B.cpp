#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<uint32_t> b(n - 1);
        
        for (int i = 0; i < n - 1; ++i) {
            cin >> b[i];
        }
        
        vector<uint32_t> a(n);
        
        // Initialize the first n-1 elements of a with b
        for (int i = 0; i < n - 1; ++i) {
            a[i] = b[i];
        }
        
        // Set the last element of a
        a[n - 1] = b[n - 2];
        
        // Output the array a
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
