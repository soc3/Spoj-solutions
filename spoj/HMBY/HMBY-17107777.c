#include<iostream>
using namespace std;

int main()
{
	long long int a,b,c,d,e,w,note,sum;
	cin>>a>>b>>c>>d>>e>>w;
	sum=0;
	sum+=((1*a)+(2*b)+(4*c)+(8*d)+(16*e));
	if(w%2!=0)
	{
		cout<<"NO";
	}
	else
	{
		note=w/2;
		if(note<=sum)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}