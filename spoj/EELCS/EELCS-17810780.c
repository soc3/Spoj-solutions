#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int dp[100][100];
int rec(int l1, int l2)
{
	if(l1==0||l2==0)
		return 0;
	else  if(dp[l1][l2]!=-1)
		return dp[l1][l2];
	else{

		if(s1[l1-1]==s2[l2-1])
		{
			return dp[l1][l2]=1+rec(l1-1,l2-1);
		}
		else
		{
			return dp[l1][l2]=max(rec(l1-1,l2),rec(l1,l2-1));
		}
	    }
}
int main()
{
	memset(dp,-1,sizeof(dp));
	cin>>s1>>s2;
	int n=s1.length();
	int m=s2.length();
	int ans=rec(n,m);
	printf("%d",ans);
	return 0;
}