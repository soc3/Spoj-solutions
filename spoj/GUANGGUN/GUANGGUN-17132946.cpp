#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	long long int n;
	while((scanf("%lld",&n))!=EOF)
	{
		cout<<(n/9)*81+(n%9)*(n%9)<<endl;
		
	}
	return 0;
}