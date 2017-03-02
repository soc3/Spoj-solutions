#include<iostream>
using namespace std;
#define ll long long 

int main()
{
	ll a,b;
	cin>>a>>b;
	ll arr[a];
	for(ll i=0;i<a;i++)
	{
		cin>>arr[i];
	}
    ll sum=0,maxsum=0,l=0;
	for(ll i=0;i<a;i++)
	{
		sum+=arr[i];
		while(sum>b)
		{
			sum-=arr[l];
			l++;
		}
		if(sum>maxsum)
		{
			maxsum=sum;
		}
	}
	cout<<maxsum;
	
	return 0;
}