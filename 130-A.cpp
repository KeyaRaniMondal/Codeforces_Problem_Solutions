#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    fio;
    string s;
    cin >> s;

    // Replace all occurrences of "WUB" with a space
    string::size_type pos = 0;
    while ((pos = s.find("WUB", pos)) != string::npos) {
        s.replace(pos, 3, " ");
        pos += 1;  // Move to the next character to avoid infinite loop
    }

    // Trim leading and trailing spaces
    s.erase(0, s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);

    // Remove multiple spaces
    string res;
    bool space = false;
    for (char c : s) {
        if (c == ' ') {
            if (!space) {
                res += c;
                space = true;
            }
        } else {
            res += c;
            space = false;
        }
    }

    cout << res << endl;
    return 0;
}

