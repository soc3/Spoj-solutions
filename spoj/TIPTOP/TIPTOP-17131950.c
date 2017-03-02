#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n,x;
	cin>>t;
	x=1;
	while(t--)
	{
		cin>>n;
		if((long long)sqrtl(n)*(long long)sqrtl(n)==n)
		{
			cout<<"Case "<<x++<<": "<<"Yes"<<endl;
		}
		else
		{
			cout<<"Case "<<x++<<": "<<"No"<<endl;
		}
	}
	return 0;
}