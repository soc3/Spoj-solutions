#include<bits/stdc++.h>
using namespace std;
#define N 10000002
int prime[N+5];
void seive()
{
	std::fill(prime,prime+N+5,1);
    for(int i=2;i*i<=N;i++)
	{
		if(prime[i]==1)
		{
			
			for(int j=i*i;j<=N;j+=i)
			{
				if(prime[j]==1)
					prime[j]=i;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	seive();
	int n;
	while((scanf("%d",&n))==1)
	{
		if(n==1)
		printf("1\n");
		else
		{
		printf("1 x ");
		while(prime[n]!=1)
		{
			printf("%d x ",prime[n]);
			n/=prime[n];
		}
		printf("%d\n",n);
		}
	}
	return 0;
}