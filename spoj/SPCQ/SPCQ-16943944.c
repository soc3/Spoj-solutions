#include<stdio.h>
unsigned long long func(unsigned long long n)
{
	unsigned long long sum=0,num=n;
	while(1)
	{
		sum=0;
    n=(num);
	while(n>0)
	{
		
		sum+=(n%10);
		n/=10;
	}
	if(num%sum==0)
	break;
	num++;
	}
	return num;
}
int main()
{
	unsigned long long int c,t,n,i;
	scanf("%llu",&t);
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
		c=func(n);
		printf("%llu\n",c);
	}
}