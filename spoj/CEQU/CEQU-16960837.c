#include<stdio.h>
int gcd(int a, int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int t,a,b,c,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(c%gcd(a,b)==0)
		{
			printf("Case %d: Yes\n",i+1);
		}
		else
		{
			printf("Case %d: No\n",i+1);
		}
	}
	return 0;
}