#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 10007
ll pow(ll a , ll b)
{
	if(b==0)   return 1;
	else if(b%2==0)   return pow((((a%M)*(a%M))%M),b/2);
	else if(b%2!=0)   return ((a%M)*(pow(a,b-1)%M))%M;
}
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<pow(n+1,n-1)<<endl;
	}
	
	return 0;
}