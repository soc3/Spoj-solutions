#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a[1000000],i,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		n-=5;
	   while(n%3!=0&&n>0)
	   {
	   	n-=5;
	   }
	   if(n<=0)
	   printf("Case %d: %d\n",i+1,-1);
	   else
	   printf("Case %d: %d\n",i+1,n);
	}
	return 0;
}
