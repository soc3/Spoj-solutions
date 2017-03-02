#include<stdio.h>


int main()
{
	int t,i;
	long long int n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		
		scanf("%lld",&n);
		if(n%6==1)
		printf("%d\n",1);
		else if(n%6==2)
		printf("%d\n",4);
		else if(n%6==3)
		printf("%d\n",6);
		else if(n%6==4)
		printf("%d\n",5);
		else if(n%6==5)
		printf("%d\n",2);
		else if(n%6==0)
		printf("%d\n",0);
	}
	return 0;
}