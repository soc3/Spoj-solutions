#include<iostream>
using namespace std;

int main()
{
	long long int n,i,c,a[1000000];
	cin>>n;
	for(i=1;i<1000000;i++)
	{
		a[i-1]=1+3*i*(i-1);
	}
	while(n!=-1)
	{
		c=0;
		for(i=0;i<1000000;i++)
		{
			if(a[i]==n)
			{
				c=1;
				cout<<"Y"<<endl;
				break;
			}
		}
		if(c==0)
		{
			cout<<"N"<<endl;
		}
		cin>>n;
	}
	
	return 0;
}