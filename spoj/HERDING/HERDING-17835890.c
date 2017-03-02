#include <bits/stdc++.h>
using namespace std;
char s[1005][1005];
int vis[1005][1005];
int n,m,c,k=1;
int kab[1005][1005];
void rec(int i,int j)
{
	if(i<0||j<0||i>=n||j>=m)
	return ;
	//if(vis[i][j]==k)
	if(vis[i][j])
	{
	    if(kab[i][j]==k)
	    return ;
	    else
	    {
	        c--;
	        return ;
	    }
	}
	vis[i][j]=1;
	kab[i][j]=k;
	if(s[i][j]=='S')
	return rec(i+1,j);
	else if(s[i][j]=='W')
	return rec(i,j-1);
	else if(s[i][j]=='N')
	return rec(i-1,j);
	else if(s[i][j]=='E')
	return rec(i,j+1);
}
int main() {
	// your code goes here
	//memset(vis,0,sizeof(vis));
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%s",s[i]);
	c=0;	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!vis[i][j])
			{
				c++;
				rec(i,j);
				k++;
				//cout<<vis[1][0]<<endl;
			}
		}
	}
	printf("%d",c);
	return 0;
}