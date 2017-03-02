#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define slld(a) scanf("%lld",&a)
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 105
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll n;
string s[MAX];	    
vector<ll>v[MAX];
vector<ll>v2[MAX];
vector<ll>vis(MAX);
stack<ll>fin;
void dfs(ll src){
	vis[src]=1;
	for (int i = 0; i < v[src].size(); ++i)
	{
		/* code */
		if(!vis[v[src][i]])
			dfs(v[src][i]);
	}
	fin.push(src);
}
void dfs2(ll src){
	vis[src]=1;
	for (int i = 0; i < v2[src].size(); ++i)
	{
		/* code */
		if(!vis[v2[src][i]])
			dfs2(v2[src][i]);
	}
}
int main()
{
	ll t;
	slld(t);
	wl(t){
		for (int i = 0; i < MAX; ++i)
		{
			/* code */
			v[i].clear();
			s[i].clear();
			v2[i].clear();
		}
		for(int i=0;i<MAX;i++){
		    vis[i]=0;
		}
		slld(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>s[i];
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for (int j = 0; j < n; ++j)
			{
				/* code */
				if(s[i][j]=='Y')
				{
					v[i].PB(j);
					v2[j].PB(i);
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */
			if(!vis[i])
			{
				dfs(i);
			}
		}
		for(int i=0;i<MAX;i++){
		    vis[i]=0;
		}
		ll c=0;
		while(!fin.empty()){
			ll u=fin.top();
			fin.pop();
			if(!vis[u])
			{
				c++;
			    dfs2(u);
		    }
		}
		cout<<c<<endl;
	}
    return 0;
}	   