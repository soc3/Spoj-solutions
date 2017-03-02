#include<stdio.h>
int main()
{
	double n,i,sum,count;
	scanf("%lf",&n);
	while(n!=0.00)
	{
		sum=count=0;
		for(i=2;  ;i++)
		{
			sum+=1.0/i;
			if(sum>n)
			break;
			else
			count++;
		}
		printf("%.0lf card(s)\n",count+1);
		scanf("%lf",&n);
	}
	return 0;
}