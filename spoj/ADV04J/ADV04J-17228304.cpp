#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll t,n;
	ll a[1000000],k=1,c=0;
	for(ll i=2;i<1000000;)
	{
		for(ll j=0;j<pow(2,k);j++)
		{
		a[i++]=k+2;
		if(i==1000000)
		{
			c=1;
			break;
		}
		}
		if(c==1)
		break;
		k++;
	}
	cin>>t;
	while(t--)
	{
	cin>>n;
	cout<<a[n-1]<<endl;
	}
	return 0;
}