#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;	
		ll n=s.length();
		ll last[26];
		memset(last,-1,sizeof(last));
		ll dp[n+1]={0};
		//bottom up
		dp[0]=1;
		//dp[i]->no.of distict subsequeces ending at s[i-1]
		for (int i = 1; i <=n ; ++i)
		{
		    dp[i]=(2*dp[i-1])%mod;
			if(last[s[i-1]-'A']!=-1)
		        dp[i]=((2*dp[i-1])%mod-dp[last[s[i-1]-'A']]+mod)%mod;	
		    last[s[i-1]-'A']=i-1;		      
		}
		printf("%lld\n",dp[n]);
	}
	return 0;
}