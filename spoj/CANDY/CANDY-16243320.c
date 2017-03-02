#include<stdio.h>
int main()
{
int a,b[100000],i,j,sum,sum2,c;
while(scanf("%d",&a)&&a!=-1)
{
	sum=0,sum2=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
		sum+=b[i];
	}
			if(sum%a!=0)
			printf("%d\n",-1);
			else
			{
				for(j=0;j<a;j++)
				{
					c=b[j]-sum/a;
					if(c>0)
					sum2+=c;
				if(j==a-1)
				printf("%d\n",sum2);
				}
			}
			
		}
	
return 0;
}