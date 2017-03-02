#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double t,a,b,c,d,s,area;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2.0;
		area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<fixed<<setprecision(2)<<area<<endl;
	}
	
	return 0;
}