#include<bits/stdc++.h>
using namespace std;

#define inf 10000000

int k,n,r;
int dp[105][10005];
int visited[105][10005];
int rec(vector<pair<int,pair<int,int> > >* v,int i, int k)
{
	if(i==n&&k>=0)
		return 0;
	if(k<0)
		return inf;
	if(dp[i][k]!=-1)
		return dp[i][k];
	if(visited[i][k])
	    return inf;
	int mini=inf;
	visited[i][k]=1;
	for(int j=0;j<v[i].size();j++)
	{
		mini=min(mini,v[i][j].second.first+rec(v,v[i][j].first,k-v[i][j].second.second));
	}
	return dp[i][k]=mini;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    vector<pair<int,pair<int,int> > >v[105];
		memset(dp,-1,sizeof(dp));
		memset(visited,0,sizeof(visited));
		scanf("%d%d%d",&k,&n,&r);
		while(r--)
		{
			int a,b,l,t;
			scanf("%d%d%d%d",&a,&b,&l,&t);
			a--; b--;
			v[a].push_back(make_pair(b,make_pair(l,t)));
		}
		n--;
		int ans=rec(v,0,k);
		if(ans==inf)
			printf("-1\n");
		else
			printf("%d\n",ans);
	}
	return 0;
}