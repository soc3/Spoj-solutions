#include<iostream>
using namespace std;
long long int gcd(long long int a, long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	long long int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<b/gcd(a,b)<<" "<<a/gcd(a,b)<<endl;
	}
	return 0;
}