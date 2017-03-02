#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
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
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
	    
int main()
{
	int n;
	sd(n);
	int a[n];
	for (int i = 0; i < n; ++i)
	        {
	        	/* code */
	        	sd(a[i]);
	        }        
	int dp[n];
	for (int i = 0; i < n; ++i)
	        {
	        	/* code */
	        	dp[i]=1;
	        }      
	int sign=0;          
	for(int i=1;i<n;i++){
		if(a[i]<0) sign=0;
		else  sign=1;
		int maxi=-1; 
		for(int j=i-1;j>=0;j--){
			if(sign==0){
				if(a[j]>0 && abs(a[i])>abs(a[j]))
					maxi=max(maxi,dp[j]);
			}
			else{
				if(a[j]<0 && abs(a[i])>abs(a[j]))
					maxi=max(maxi,dp[j]);
			}
		}
		if(maxi!=-1)
			dp[i]=dp[i]+maxi;
	}
	int ans=-1;
	for(int i=0;i<n;i++)
	ans=max(ans,dp[i]);
	cout<<ans;
    return 0;
}	   