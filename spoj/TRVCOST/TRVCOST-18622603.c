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
#define mod 10000000000000
#define MAX 505
#define slld(a) scanf("%lld",&a)
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
vector<pair<ll,ll> >adj[MAX];
vector<ll>dist(MAX);
void dijkstra(ll src)
	    		{
	    		    //list<pair<int,int> >* adj;
	    		    priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > >pq;
	    		    pq.push(make_pair(0,src));
	    		    dist[src]=0;
	    		    while(!pq.empty())
	    		    {
	    		    ll u=pq.top().second;
	    		    pq.pop();
	    		    vector<pair<ll,ll> >:: iterator it;
	    		    for(it=adj[u].begin();it!=adj[u].end();it++)
	    		    {
	    		      ll v=it->first;
	    		      ll weight=it->second;
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
	ll n;
	slld(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		ll a,b,c;
		slld(a); slld(b); slld(c);
		adj[a].PB(MP(b,c));
		adj[b].PB(MP(a,c));
	}
	for (int i = 0; i < MAX; ++i)
	{
		/* code */
		dist[i]=mod;
	}
	ll u;
	slld(u);
	dijkstra(u);
	ll q;
	slld(q);
	wl(q){
		ll d;
		slld(d);
		if(dist[d]>=mod)
			cout<<"NO PATH"<<endl;
		else
			cout<<dist[d]<<endl;
	}
    return 0;
}	   