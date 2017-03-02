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
	char s[1005];
	int x=1;
	while(scanf("%s",s)!=EOF)
	{
		printf("Game #%d: ",x++);
		int n=strlen(s);
		if(n==1)
		{
			if(s[0]=='1')
				printf("1\n");
			else
				printf("0\n");
		}
		else
		{
			int ch=0;
			for (int i = 0; i < n-1; ++i)
				if(s[i]!=s[i+1])
					ch++;
			if(s[0]=='1')
				printf("%d\n",ch+1);
			else
				printf("%d\n",ch);
		}
		for(int i=0;i<1005;i++)
		   s[i]='\0';
	}        
    return 0;
}	   