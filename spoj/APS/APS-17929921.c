#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
#define ll long long
ll a[MAX],prime[MAX];
void init()
{
    for(ll i=2;i<MAX;i++)
    {
        if(!prime[i])
        {
        	prime[i]=i;
            for(ll j=2*i;j<MAX;j+=i)
            {
                if(prime[j]==0)
                    prime[j]=i;//lowest prime divisor
            }
        }
    }
}
int main()
{
	init();
	int t;
	scanf("%d",&t);
	a[0]=a[1]=0;
	for(int i=2;i<MAX;i++)
		a[i]=a[i-1]+prime[i];
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%lld\n",a[n]);
	}
	return 0;
}