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
		string s;
		cin>>s;
		int n=s.length();
		string a[n];
		a[0]=s;
		for(int i=0;i<n-1;i++)
			cin>>a[i+1];
		int mi=0;
		int max=-1;
		for(int i=0;i<n;i++)
		{
			int c=0;
			bool check[53][53];
			mset(check,false);
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='Y')
				{
					for(int k=0;k<n;k++)
					{
						if(i!=k&&a[j][k]=='Y'&&a[i][k]=='N'&&check[i][k]==false)
						{
							c++;
							check[i][k]=true;
						}
					}
				}
			}
			if(c>max)
			{
				max=c;
				mi=i;
			}
		}
		printf("%d %d\n",mi,max);
	}        
    return 0;
}	   