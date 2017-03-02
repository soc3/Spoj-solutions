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
		int c1,c2;
		sd(c1);  sd(c2);
		if(c1==c2&&c1==1)
		    printf("Ramesh\n");
		else if(c1%2 && c2%2)
			printf("Ramesh\n");
		else
			printf("Suresh\n");
	}        
    return 0;
}	   