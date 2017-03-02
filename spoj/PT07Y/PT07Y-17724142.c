#include <bits/stdc++.h>
using namespace std;
vector<int>v[100005];
int ans;
int visited[100005];
void dfs(int root,int par)
{
	visited[root]=1;
	for(int i=0;i<v[root].size();i++)
	{
		if(!visited[v[root][i]])
		{
			dfs(v[root][i],root);
		}
		else
		{
			if(v[root][i]!=par)
			{
				ans=1;
				return ;
			}
		}
	}
	
}
int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	if(m!=n-1)
	{
		cout<<"NO";
	}
	else
	{
		dfs(1,1);
		for(int i=1;i<=n;i++)
		if(visited[i]==0)
		{
			cout<<"NO";
			return 0;
		}
		if(ans==0)
		cout<<"YES";
		else
		cout<<"NO";
	}
	return 0;
}