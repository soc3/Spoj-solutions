#include<stdio.h>
#include<math.h>
int main()
{
	long long int k,n,a[1000000],i,j,b,max,pos1,pos2;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>=max)
		{
		max=a[i];
		pos1=i+1;
		pos2=i+1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b=a[i];
			for(k=i+1;k<=j;k++)
			{
				
				b^=a[k];
			}
			if(b>max)
			{
				pos1=i+1;
				pos2=j+1;
			max=b;
				
			}
			if(b==max)
			{
				max=b;
				if((i+1<pos1||i+1==pos1)&&j+1<pos2)
			{
				pos1=i+1;
				pos2=j+1;
			}
			}
			
		}
	}

	printf("%lld\n%lld %lld",max,pos1,pos2);
	return 0;
}