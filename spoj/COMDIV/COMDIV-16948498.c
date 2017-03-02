#include <stdio.h>
#include<math.h>
int gcd(int a ,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(void) {
	// your code goes here
	int t,a,b,i,j,c,f;
	float e;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		c=0;
		scanf("%d%d",&a,&b);
		e=sqrt(gcd(a,b));
		for(j=1;j<e;j++)
		{
			if(a%j==0&&b%j==0)
			c++;
		}
		f=e*e;
		if(e*e==f)
		{
			c=2*c+1;
		}
		else
		{
			c=2*c;
		}
		printf("%d\n",c);
	}
	return 0;
}
