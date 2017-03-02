#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(const ll& a, const ll& b)
{
	return a>b;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		ll a[n],b[n],f1=0,cc,j=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&cc);
			if(cc!=1)
			{
			a[j]=cc;	
			b[j]=a[j];
			j++;
		    }
		    else
		    f1++;
		}
		if(n==1)
		{
			printf("%lld\n",cc);
			continue;
		}
		sort(a,a+j);
		sort(b,b+j,cmp);
		for(int i=0;i<f1;i++)
			printf("1 ");
		if(a[0]*log(a[1])>b[0]*log(b[1]))
		{
			for(int i=0;i<j;i++)
				printf("%lld ",a[i]);
		}
		else
		{
			for(int i=0;i<j;i++)
				printf("%lld ",b[i]);
		}
		printf("\n");
	}
	return 0;
}