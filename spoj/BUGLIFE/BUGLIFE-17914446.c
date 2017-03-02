#include <bits/stdc++.h>
using namespace std;
int n,m;
int V;
int G[2005][2005];
int vis[2005];
bool isBipartite(int src)
{
    // Create a color array to store colors assigned to all veritces. Vertex 
    // number is used as index in this array. The value '-1' of  colorArr[i] 
    // is used to indicate that no color is assigned to vertex 'i'.  The value 
    // 1 is used to indicate first color is assigned and value 0 indicates 
    // second color is assigned.
    int colorArr[V];
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;
 
    // Assign first color to source
    colorArr[src] = 1;
    vis[src]=1;
    // Create a queue (FIFO) of vertex numbers and enqueue source vertex
    // for BFS traversal
    queue <int> q;
    q.push(src);
 
    // Run while there are vertices in queue (Similar to BFS)
    while (!q.empty())
    {
        // Dequeue a vertex from queue ( Refer http://goo.gl/35oz8 )
        int u = q.front();
        q.pop();
        vis[u]=1;
         // Find all non-colored adjacent vertices
        for (int v = 0; v < V; ++v)
        {
            // An edge from u to v exists and destination v is not colored
            if (G[u][v] && colorArr[v] == -1)
            {
                // Assign alternate color to this adjacent v of u
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }
 
            //  An edge from u to v exists and destination v is colored with
            // same color as u
            else if (G[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
 
    // If we reach here, then all adjacent vertices can be colored with 
    // alternate color
    return true;
}
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	int x=1;
	while(t--)
	{
	memset(vis,0,sizeof(vis));	
	for(int i=0;i<2005;i++)
	for(int j=0;j<2005;j++)
	G[i][j]=0;
	printf("Scenario #%d:\n",x++);    
	scanf("%d%d",&n,&m);
	V=n+1;
	for(int i=0;i<m;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		G[a][b]=G[b][a]=1;
	}
	bool ans;
		for(int i=1;i<=n;i++)
		{
		  if(!vis[i])
		  {
          ans=isBipartite(i);
          if(ans==false)
          {
              printf("Suspicious bugs found!\n");
              break;
          }
		}
		}
		if(ans==true)
		printf("No suspicious bugs found!\n");
	}
	return 0;
}