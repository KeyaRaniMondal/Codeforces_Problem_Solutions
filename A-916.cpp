#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count_char=0;
		cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<26;++i)
		{
			char ch='A'+i;
			int log=count(s.begin(),s.end(),ch);
			if(log>=i+1)
			count_char++;
		}
		cout<<count_char<<endl;
	}
}
