#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, s1;
        cin >> s >> s1;
        int flag=0,count=0;
        if(s.find(s1)!=string::npos)
        {
            flag=1;
            break;
        }
        count++;
        s+=s;
        if(flag==1)
        cout<<count<<endl;
        else
        cout<<-1<<endl;
    }
 
    return 0;
}
