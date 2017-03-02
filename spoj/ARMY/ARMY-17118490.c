#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int t,ng,nm,i,a,min1,min2;
	
	cin>>t;
	
	while(t--)
	{
		
		cin>>ng>>nm;
		min1=-1000000000;
		min2=-1000000000;
		for(i=0;i<ng;i++)
		{
			cin>>a;
			if(a>min1)
			min1=a;
		}
		for(i=0;i<nm;i++)
		{
			cin>>a;
			if(a>min2)
			min2=a;
		}
		if(min1<min2)
		{
			cout<<"MechaGodzilla"<<endl;
		}
		else
		{
			cout<<"Godzilla"<<endl;
		}
		
		
	}
	return 0;
}