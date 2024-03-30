#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        int pos = s.find(":");
        string hrs = s.substr(0, pos);
        string mins = s.substr(pos + 1);
        int hour = stoi(hrs);
        int minute = stoi(mins);
        string amPm;
        int rem;
        if (hour <= 12)
        {
            rem = (hour == 0) ? 12 : hour;
            amPm = " AM";
        }
        else
        {
            int rem = hour % 12;
            amPm = " PM";
        }

        string x = (rem < 10) ? "0" + to_string(rem) : to_string(rem);
        cout << x << ":" << mins << amPm << endl;
    }

    return 0;
}
