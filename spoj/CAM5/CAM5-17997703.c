#include<bits/stdc++.h>
using namespace std;
int vis[1000000];
vector<int>v[1000000];
void dfs(int i, int p)
{
    vis[i]=1;
    for(int j=0;j<v[i].size();j++)
    if(!vis[v[i][j]])
    dfs(v[i][j],i);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        int n;
        scanf("%d",&n);
        int c=0;
        int e;
        scanf("%d",&e);
        while(e--)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i,i);
            }
        }
        printf("%d\n",c);
        for(int i=0;i<1000000;i++)
        v[i].clear();
    }
    return 0;
}