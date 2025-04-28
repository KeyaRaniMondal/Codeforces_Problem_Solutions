#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canAddPoint(vector<int>& points) {
    int n = points.size();
    int min_gap = points[1] - points[0];

    for (int i = 1; i < n; ++i) {
        int gap = points[i] - points[i - 1];
        if (gap < min_gap) {
            min_gap = gap;
        }
    }

    for (int i = 1; i < n; ++i) {
        int gap = points[i] - points[i - 1];
        if (gap == min_gap) {
            int midpoint = points[i - 1] + gap / 2;
            if ((points[i] - midpoint) == (midpoint - points[i - 1])) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }
        
        if (canAddPoint(points)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
