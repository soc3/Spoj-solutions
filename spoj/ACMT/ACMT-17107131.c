#include<iostream>
using namespace std;

int main()
{
	int t,e,n;
	cin>>t;
	while(t--)
	{
		cin>>e>>n;
		int teams=0;
		while(e!=0&&n!=0)
		{
			if(e+n<3)
			{
				break;
			}
			
			if(e<n)
			{
				e-=1;
				n-=2;
				teams++;
			}
			else
			{
				e-=2;
				n-=1;
				teams++;
			}
		}
		cout<<teams<<endl;
	}
	return 0;
}