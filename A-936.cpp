#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<long long>v(n);
       for(int i=0;i<n;++i)
       {
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       long long median=v[(n+1)/2-1];
       int count=0;
       for(int i=(n+1)/2-1 ; i<n;++i)
       {
        if(v[i]>median){
        break;
        }
        count++;
       }
       cout<<count<<endl;
    }
    return 0;
}