// #include <bits/stdc++.h>
// using namespace std;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define ll long long

// int main()
// {
//     fio;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int arr[4];
//         for (int i = 0; i < 4; ++i)
//             cin >> arr[i];
//         int count = 0;
//         for (int i = 2; i < 4; ++i)
//         {
//             if (arr[0] == arr[1])
//             {
//                 if (arr[0] > arr[i])
//                     count++;
//                 if (arr[1] > arr[i])
//                     count++;
//             }
//             else if (arr[0] > arr[i])
//                 count++;
//             else if (arr[1] > arr[i])
//                 count++;
//         }
//         cout << count << endl;
//     }
//     return 0;
// }
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int wins = 0;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (a1 > b1 + j) {
                    wins++;
                } else if (a2 > b1 + j) {
                    wins++;
                }
            }
        }

        cout << wins << endl;
    }

    return 0;
}