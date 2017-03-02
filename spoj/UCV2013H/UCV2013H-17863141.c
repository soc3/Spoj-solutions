#include<bits/stdc++.h>
using namespace std;
int vis[252][252];
int a[252][252];
int n,m;
int rec(int i,int j)
{
	if(i<0||j<0||i>=n||j>=m)
	return 0;
	if(a[i][j]==0||vis[i][j]==1)
	return 0;
	else
	{
	vis[i][j]=1;    
	return 1+rec(i+1,j)+rec(i,j+1)+rec(i-1,j)+rec(i,j-1);
	}
}
int main() {
	// your code goes here
	while(1)
	{
	memset(vis,0,sizeof(vis));
	int f[252*252]={0};
	scanf("%d%d",&n,&m);
	if(n==0&&m==0)
	break;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	int conn=0;		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1&&(!vis[i][j]))
			{
				conn++;
				int tc=rec(i,j);
				//cout<<tc<<endl;
				f[tc]++;
			}
		}
	}
	if(conn!=0)
	printf("%d\n",conn);
	else
	{
		printf("0\n");
		continue;
	}
	for(int j=0;j<252*252;j++)
	{
		if(f[j]!=0)
		{
			printf("%d %d\n",j,f[j]);
		}
	}
	}		
	return 0;
}