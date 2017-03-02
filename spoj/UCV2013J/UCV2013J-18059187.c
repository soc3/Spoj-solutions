#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define sl(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 1000000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
	    
int main()
{
	int n;
	while(1)
	{
		sd(n);
		if(n==0)
			return 0;
		int a[n+1];
		for (int i = 1; i <= n; ++i)
		{
			/* code */
			sd(a[i]);
		}
		int j=n/2+1;
		ll sum=0;
		for(int k=j;k<=n;k++)
		{
			sum+=a[k];
		}
		printf("%lld\n", sum);
	}        
}	   