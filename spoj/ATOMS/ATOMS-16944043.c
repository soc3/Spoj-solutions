#include<stdio.h>
int main()
{
	float t,n,k,m,t2,i;
	scanf("%f",&t);
	for(i=0;i<t;i++)
	{
		scanf("%f%f%f",&n,&k,&m);
		t2=0;
		if(n>m)
		printf("%d\n",0);
		else
		{
		while(n<=m)
		{
			n*=k;
			t2++;
		}
		
		printf("%.0f\n",t2-1);
	}
	}
	return 0;
}