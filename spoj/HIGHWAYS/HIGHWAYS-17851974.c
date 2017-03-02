#include<bits/stdc++.h>
using namespace std;
int n,m,s,e;
vector<pair<int,int> >adj[1000000];

int dijkstra(int src,int e)
		{
			vector<int>dist(n,INT_MAX);
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
		return dist[e];
} 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&n,&m,&s,&e);
        while(m--)
        {
            int a,b,w;
            scanf("%d%d%d",&a,&b,&w);
            a--; b--;
            adj[a].push_back(make_pair(b,w));
            adj[b].push_back(make_pair(a,w));
        }
        s--; e--;
        int ans=dijkstra(s,e);
        if(ans==INT_MAX)
            printf("NONE\n");
        else
            printf("%d\n",ans);
    }
    return 0;
}