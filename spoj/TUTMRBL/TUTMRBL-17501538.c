#include<bits/stdc++.h>
using namespace std;
#define MAX 10036224
int prime[MAX];
void seive()
{
    int n=MAX;
    for(int i=2;i*i<=n;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(prime[j]==0)
                    prime[j]=i;//lowest prime divisor
            }
        }
    }
}
int count(int n)
{
	int c=0;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			c+=2;
		}
	}
	return c/2;
}
int main()
{
	seive();
	int n,x;
	while((scanf("%d",&n)==1)&&n)
	{
	    int t=n;
		printf("%d = ",n);
		while(prime[n]!=0)
		{
			printf("%d * ",prime[n]);
			n/=prime[n];
		}
		printf("%d \n",n);
		x=count(t);
		printf("With %d marbles, %d different rectangles can be constructed.\n",t,x);
	}
	return 0;
}