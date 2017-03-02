#include<iostream> 
#define ll long long 

using namespace std;

int main() {
	// your code goes
	ll dp[1000005];
	dp[1]=1;
	dp[2]=2;
	dp[3]=2;
    for(ll i=4;i<=1000000;i++)
    {
    	if(i%2)
    	dp[i]=2*(dp[i/2+1]-1);
    	else
    	dp[i]=2*(dp[i/2]);
    }
	ll x;
	cin>>x;
	while(x!=0)
	{
		
		cout<<dp[x]<<endl;
		cin>>x;
	}
	return 0;
}