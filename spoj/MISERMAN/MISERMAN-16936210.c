#include<stdio.h>
int a[101][101],n,m;
int min(int a, int b)
{
	if(a<b)
	return a;
	else
	return b;
}
int k;
int rec(int i , int j)
{
	
	if(i==n||j==m)
	return 0;
	else if(j==0)
	return a[i][j]+min(rec(i+1,j+1),rec(i+1,j));
	else if(j==m-1)
	return a[i][j]+min(rec(i+1,j-1),rec(i+1,j));
	else
	return a[i][j]+min(min(rec(i+1,j-1),rec(i+1,j+1)),rec(i+1,j));
	
}
int main()
{
	int k,sum=0,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=rec(0,0);
	for(k=1;k<n;k++)
	{
		if(rec(0,k)<sum)
		sum=rec(0,k);
	}
	printf("%d",sum);
}