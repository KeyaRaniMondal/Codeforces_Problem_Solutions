// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long
// int main()
// {
//     fio;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, b = 0, s = 0, count = 0;
//         cin >> n;
//         ll arr[n];
//         for (ll i = 0; i < n; i++)
//             cin >> arr[i];

//         for (ll i = 0; i < n; i++)
//         {
//             if (arr[i] >= b)
//             {
//                 if (arr[i] == s)
//                     count++;
//                 b = arr[i];
//             }
//             else if (b >= (s - b) + arr[i])
//             {
//                 count++;
//             }
//             s += arr[i];
//         }
//         cout << count << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll sum = 0;
        set<long long> s;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            s.insert(v[i]);
            if (sum % 2 == 0)
            {
                if (s.find(sum >> 1) != s.end())
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
