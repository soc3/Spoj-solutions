#include<iostream>
using namespace std;

int main()
{
	int n,a,b,count;
	cin>>n;
	a=1;
	b=1;
	count=0;
	while(a*b<=n)
	{
		count++;
		b++;
		if(a*b>=n)
		{
			if(a*b<=n)
			count++;
			a++;
			b=a;
		}
	}
	cout<<count<<endl;
	
	return 0;
}