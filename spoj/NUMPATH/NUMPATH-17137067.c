#include <iostream>
using namespace std;
long long dp[1000000]={0};
long long fact(long long n)
{
	if(dp[n]!=0)
	return dp[n];
	else if(n==0)
	return 1;
	else
	return dp[n]=n*fact(n-1);
}
int main() {
	// your code goes here
	long long t,r,c;
	cin>>t;
	dp[0]=dp[1]=1;
	while(t--)
	{
		cin>>r>>c;
		cout<<fact(r+c-2)/(fact(r-1)*fact(c-1))<<endl;
	}
	return 0;
}