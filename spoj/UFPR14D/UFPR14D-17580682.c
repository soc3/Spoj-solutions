#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	long long sum[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum[1]=a[1];
	for (int i = 2; i <= n ; ++i)
	{
		sum[i]=sum[i-1]+a[i];
	}
	int q;
	scanf("%d",&q);
	while(q--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%lld\n",sum[b]-sum[a-1]);
	}
	return 0;
}