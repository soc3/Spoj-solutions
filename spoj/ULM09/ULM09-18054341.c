#include<bits/stdc++.h>
using namespace std;

#define edge pair< int, int >
#define MAX 200003

vector< pair< int, edge > > GRAPH, MST;
int parent[MAX], total, N, E;

int findset(int x, int *parent)
{
    if(x != parent[x])
        parent[x] = findset(parent[x], parent);
    return parent[x];
}

void kruskal()
{
    int i, a,b;
    sort(GRAPH.begin(), GRAPH.end());
    for(i=total=0; i<E; i++)
    {
        a = findset(GRAPH[i].second.first, parent);
        b = findset(GRAPH[i].second.second, parent);
        if(a != b)
        {
            MST.push_back(GRAPH[i]); 
            total += GRAPH[i].first; 
            parent[a] = parent[b]; 
        }
    }
}
void rset()
{
    for(int i=1; i<=N; i++) parent[i] = i;
}
int main()
{
    int i, u, v, w,sum;
    N=1;
    while(1)
    {
    scanf("%d%d", &N, &E);
    if((N==0)&&(E==0)){break;}
    rset();
    sum=0;
    GRAPH.clear();
    for(i=0; i<E; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
        sum+=w;
    }
    kruskal(); 
    printf("%d\n",sum-total);
    }
    return 0;
}