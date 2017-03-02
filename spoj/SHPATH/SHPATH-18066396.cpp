#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define sl(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 1000000
#define INF 100000000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n;	    
map<string,int>m;
vector<pair<int,int> >adj[MAX];
int dist[MAX];
void dijkstra(int src)
		{
		    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
		    pq.push(make_pair(0,src));
		    dist[src]=0;
		    while(!pq.empty())
		    {
		    int u=pq.top().second;
		    pq.pop();
		    vector<pair<int,int> >:: iterator it;
		    for(it=adj[u].begin();it!=adj[u].end();it++)
		    {
		      int v=it->first;
		      int weight=it->second;
		      if(dist[v]>dist[u]+weight) 
		      {
		      dist[v]=dist[u]+weight;
		      pq.push(make_pair(dist[v],v)); 		      
		      }
		    }
		    }
} 
int main()
{
	int t;
	sd(t);
	while(t--)
	{
		sd(n);
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin>>s;
			m[s]=i+1;
			int k;
			sd(k);
			for (int j = 0; j < k; ++j)
			{
				int a,b;
				sd(a); sd(b);
				adj[i+1].PB(MP(a,b));
				adj[a].PB(MP(i+1,b));
			}
		}
		int q;
		sd(q);
		while(q--)
		{
			string s1,s2;
			cin>>s1>>s2;
			int src=m[s1];
			int dest=m[s2];
			fill(dist,dist+MAX,INF);
			dijkstra(src);
			int ans=dist[dest];
			printf("%d\n",ans);
		}
		for(int ii=0;ii<MAX;ii++)
			adj[ii].clear();
		m.clear();
	}        
    return 0;
}	   