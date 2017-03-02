#include<stdio.h>
int min(int a,int b)
{
	return a<b?a:b;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,s[21][3],mi,i,j;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			for(j=0;j<3;j++)
				scanf("%d",&s[i][j]);
		for(i=1;i<n;i++)
		{
			
				s[i][0] += min(s[i-1][1],s[i-1][2]);	
				
				s[i][1] += min(s[i-1][0],s[i-1][2]);
				
				s[i][2] += min(s[i-1][0],s[i-1][1]);
			
		}
		mi = min(s[n-1][0],min(s[n-1][1],s[n-1][2]));
		
		printf("%d\n",mi);
	}
	return 0;
}
		