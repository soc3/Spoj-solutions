#include<iostream>
#define M 1000000007
using namespace std;
long long int pow2(long long int a,long long int b)
{
	if(b==0)
	return 1;
	else if(b%2==0)
	{
		return pow2((a%M*a%M)%M,b/2);
	}
	else
	{
		return (a%M*pow2(a,b-1)%M)%M;
	}
}	
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		cout<<pow2(2,n-1)<<endl;
	}
	return 0;
}