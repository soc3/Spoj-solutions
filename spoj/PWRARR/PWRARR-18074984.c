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
	int t;
	sd(t);
	while(t--)
	{
		int n;
		sd(n);
		vector<int>v;
		for (int i = 0; i < n; ++i)
		{
			int a;
			sd(a);
			v.PB(a);
		}
		sort(v.begin(),v.end());
		ll sum=0;
		for(int i=0;i<n;i++)
		{
		    if(upper_bound(v.begin(),v.end(),v[i])!=v.end())
			sum+=(upper_bound(v.begin(),v.end(),v[i])-v.begin());
			else 
			sum+=n;
		}
		printf("%lld\n",sum);
	}        
    return 0;
}	   