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
	sd(n);
	vector<int>t;  vector<int>q;
	for (int i = 0; i < n; ++i)
	{
	    int aa;
	    sd(aa);
	    q.PB(aa);
	}
    for (int i = 0; i < n; ++i)
	{
	    int bb;
	    sd(bb);
	    t.PB(bb);
	}
	sort(t.begin(),t.end());
	int f[MAX]={0};
	int c=0;
	for(int i=0;i<n;i++)
	{
	    vector<int>:: iterator ab=t.begin();
		while(upper_bound(ab,t.end(),q[i])!=t.end())
		{
			int j=upper_bound(ab,t.end(),q[i])-t.begin();
			if(f[j]==0)
			{
				c++;
				f[j]=1;
				break;
			}
			else {
			    ab=t.begin()+j+1;
			}
		}
	}
	printf("%d\n",c);
    return 0;
}	   