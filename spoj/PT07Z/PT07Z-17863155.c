#include <bits/stdc++.h>
using namespace std;
vector<int>v[100005];
queue<pair<int,int> >q;
int visited[100005];
int maxroot=-1,maxroot2=1;
void bfs(int root)
{
	q.push(make_pair(root,0));
	visited[root]=1;
	while(!q.empty()){
	int f=q.front().first;
	int wt=q.front().second;
	if(q.front().second>maxroot)
	{
	maxroot2=q.front().first;
	maxroot=q.front().second;
	}
	q.pop();
	for(int i=0;i<v[f].size();i++)
	{
	  if(!visited[v[f][i]])
	  {
	  visited[v[f][i]]=1;
	  q.push(make_pair(v[f][i],wt+1));
	  }
	}
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(1);
	memset(visited,0,sizeof(visited));
	maxroot=-1;
	bfs(maxroot2);
	cout<<maxroot;
	return 0;
}