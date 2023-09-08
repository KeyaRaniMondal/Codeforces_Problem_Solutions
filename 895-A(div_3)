#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, c, count = 0;
      cin >> a >> b >> c;
 
      if (a < b)
         swap(a, b);
 
      if (a == b)
         cout << 0 << endl;
      else
      {
         while (a > b)
         {
            a = a - c;
            b = b + c;
            count++;
         }
         cout << count << endl;
      }
   }
 
   return 0;
}
