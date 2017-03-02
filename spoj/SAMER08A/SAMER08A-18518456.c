#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
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
#define MAX 505
#define MAX2 10005
#define INF 100000000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n,m,s,d;
vector<pii>v1[MAX];
vector<pii>v2[MAX];
vector<pii>v[MAX];
vector<pair<pii,pii> >edj(MAX2);
vector<int>dis1(MAX);
vector<int>dis2(MAX);
void dijkstra(int src,vector<int>& dist)
	    		{
	    		    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
	    		    pq.push(make_pair(0,src));
	    		    dist[src]=0;
	    		    while(!pq.empty())
	    		    {
	    		    int u=pq.top().second;
	    		    pq.pop();
	    		    vector<pair<int,int> >:: iterator it;
	    		    for(it=v1[u].begin();it!=v1[u].end();it++)
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
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	while(1){
		fill(dis1.begin(),dis1.end(),INF);
		fill(dis2.begin(),dis2.end(),INF);
		cin>>n>>m;
		if(n==0 && m==0)
			break;
		cin>>s>>d;	
		while(m--){
			int x,y,w;
			cin>>x>>y>>w;
			v1[x].PB(MP(y,w));
			v2[y].PB(MP(x,w));
			edj.PB(MP(MP(x,y),MP(w,1)));
		}
		dijkstra(s,dis1);
		int mind=dis1[d];
		for (int i = 0; i < MAX; ++i)
			v1[i].clear();
		for (int i = 0; i < MAX; ++i)
			v1[i]=v2[i];
		dijkstra(d,dis2);
		for (int i = 0; i < edj.size(); ++i)
		{
			if((dis1[edj[i].F.F]+dis2[edj[i].F.S]+edj[i].S.F) == mind)
				edj[i].S.S=0;
		}
		for (int i = 0; i < edj.size(); ++i)
		{
			if(edj[i].S.S)
				v[edj[i].F.F].PB(MP(edj[i].F.S,edj[i].S.F));
		}
		for (int i = 0; i < MAX; ++i)
			v1[i].clear();
		for (int i = 0; i < MAX; ++i)
			v1[i]=v[i];
		fill(dis1.begin(),dis1.end(),INF);
		dijkstra(s,dis1);
		if(dis1[d]==INF)
			cout<<-1<<endl;
		else
			cout<<dis1[d]<<endl;
		for (int i = 0; i < MAX; ++i)
		   v1[i].clear(), v2[i].clear(), v[i].clear();
			edj.clear();
	}        
    return 0;
}	   