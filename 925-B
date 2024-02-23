#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        long long sum=0;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            sum+=v[i];
        }
        int each=sum/n;
        int water=0,flag=0;
        for(int i=0;i<n;++i)
        {
            if((v[i]+water)<each)
            {
                flag=1;
                break;
            }
            else
            water=v[i]+water-each;
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
}
