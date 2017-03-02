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
	#define MAX 10005
	#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
	typedef pair<int,int> pii;
	vector<pii>adj[MAX];
	int dist[MAX];	
	void dijkstra(int src)
	    		{
	    		    //list<pair<int,int> >* adj;
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
		ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
		int t;
		cin>>t;
		while(t--)
		{
			fill(dist,dist+MAX,100000000);
			int n,m;
			cin>>n>>m;
			while(m--){
				int x,y,w;
				cin>>x>>y>>w;
				adj[x].push_back(make_pair(y,w));
			}
			int s,d;
			cin>>s>>d;
			dijkstra(s);
			if(dist[d]!=100000000)
				cout<<dist[d]<<endl;
			else
				cout<<"NO"<<endl;
			for(int i=0;i<=n;i++)
			adj[i].clear();
		}        
	    return 0;
	}	   