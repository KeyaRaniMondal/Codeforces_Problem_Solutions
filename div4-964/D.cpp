#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(const string& s, const string& t) {
    int j = 0;
    for (int i = 0; i < s.size() && j < t.size(); ++i) {
        if (s[i] == t[j]) {
            j++;
        }
    }
    return j == t.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, t;
        cin >> s >> t;

        bool possible = true;
        int j = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == t[j]) {
                j++;
            } else if (s[i] == '?') {
                s[i] = t[j]; 
                j++;
            } else {
                possible = false;
                break;
            }
        }

        if (possible && j == t.size()) {
            cout << "YES" << endl << s << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}