#include <bits/stdc++.h>
using namespace std;
char s[60][60];
int n,m;
char pre[60][60];
int vis[60][60];
int rec(int i,int j)
{
	if(i<0||i>=n||j<0||j>=m)
	return 0;
	if(vis[i][j])
	return 0;
	if(s[i][j]=='Z'&&pre[i][j]=='Y')
	{
	vis[i][j]=1;    
	return 1;
	}
	if(s[i][j]==pre[i][j]+1)
	{
	    vis[i][j]=1;
		pre[i+1][j]=pre[i-1][j]=pre[i][j+1]=pre[i][j-1]=pre[i+1][j+1]=pre[i-1][j-1]=pre[i+1][j-1]=pre[i-1][j+1]=s[i][j];
		//cout<<i<<" "<<j<<endl;
		return 1+max(max(max(rec(i+1,j),rec(i,j+1)),max(rec(i,j-1),rec(i-1,j))),max(max(rec(i-1,j-1),rec(i+1,j+1)),max(rec(i-1,j+1),rec(i+1,j-1))));
	}
	else
	{
	    //pre[i][j]=s[i][j];
		return 0;
	}
}
int main() {
	// your code goes here
	int x=1;
	while(1)
	{
	memset(vis,0,sizeof(vis));    
	for(int i=0;i<60;i++)
	{
	    for(int j=0;j<60;j++)
	    pre[i][j]=s[i][j]=0;
	}
	scanf("%d%d",&n,&m);
	if(n==0&&m==0)
	break;
	for(int i=0;i<n;i++)
	scanf("%s",s[i]);
	int max2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='A')
			{
			    vis[i][j]=1;
				pre[i+1][j]=pre[i-1][j]=pre[i][j+1]=pre[i][j-1]=pre[i+1][j+1]=pre[i-1][j-1]=pre[i+1][j-1]=pre[i-1][j+1]='A';
				int ans=1+max(max(max(rec(i+1,j),rec(i,j+1)),max(rec(i,j-1),rec(i-1,j))),max(max(rec(i-1,j-1),rec(i+1,j+1)),max(rec(i-1,j+1),rec(i+1,j-1))));
			//	cout<<ans<<endl;
				if(ans>max2)
				max2=ans;
			}
		}
	}
	printf("Case %d: %d\n",x++,max2);
	}
	return 0;
}