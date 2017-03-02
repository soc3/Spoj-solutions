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
#define MAX 60
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int h,w;	    
string a[MAX];
int dp[MAX][MAX];
int r[8]={-1,-1,-1,0,0,1,1,1};
int c[8]={-1,0,1,-1,1,-1,0,1};
int rec(int i, int j)
{
    if(i<0||j<0||i>=h||j>=w)
    return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(a[i][j]=='Z')
		return 1;
	int maxi=1;
	for(int k=0;k<8;k++)
	{
		int rr=i+r[k];
		int cc=j+c[k];
		if(rr>=0 && rr<h && cc>=0 && cc<w)
		{
			if(a[rr][cc]==a[i][j]+1)
				maxi=max(maxi,1+rec(rr,cc));
		}
	}
	return dp[i][j]=maxi;
}
int main()
{
    int x=1;
    while(1)
    {
	//ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	memset(dp,-1,sizeof(dp));
	cin>>h>>w;
	if(h==0 && w==0)
	break;
	for(int i=0;i<h;i++)
	    cin>>a[i];        
	int maxi=0;
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if(a[i][j]=='A')
				maxi=max(maxi,rec(i,j));
		}
	}
	cout<<"Case "<<x++<<": "<<maxi<<endl;
    }
    return 0;
}	   