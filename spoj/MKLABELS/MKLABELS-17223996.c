#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll pow(ll a , ll b)
{
	if(b==0)   return 1;
	else if(b%2==0)   return pow((((a)*(a))),b/2);
	else if(b%2!=0)   return ((a)*(pow(a,b-1)));
}
int main()
{
	ll n,k=1;
	cin>>n;
	while(n!=0)
	{
		cout<<"Case "<<k++<<", N = "<<n<<", # of different labelings = "<<pow(n,n-2)<<endl;
		cin>>n;
	}
	
	return 0;
}