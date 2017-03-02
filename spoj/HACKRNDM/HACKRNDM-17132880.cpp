#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long n,k,i,c,a[1000000];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	c=0;
	for(i=0;i<n-1;i++)
	{
		if(binary_search(a+i,a+n,a[i]+k))
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}