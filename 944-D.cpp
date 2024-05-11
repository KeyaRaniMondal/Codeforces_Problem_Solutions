#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        string s1=s;
        int count=0,c=1;
        sort(s1.begin(),s1.end());
        if(s==s1)
        cout<<1<<endl;
        else
        {
            for(int i=0;i<s.size()-1;++i)
            {
                if(s[i]!=s[i+1])
                count++;
                // else
                // c=1;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}