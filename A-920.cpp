#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s,f;
		cin>>s>>f;
		int count=0,sum=0,res=0;
		for(int i=0;i<n;++i)
		{
			if(s[i]=='1')
			count++;
			if(f[i]=='1')
			sum++;
			if(s[i]!=f[i]&&f[i]=='1')
			res++;
		}
		if(count>sum)
		cout<<res+(count-sum)<<endl;
		else
		cout<<res<<endl;
	}
	return 0;
}
