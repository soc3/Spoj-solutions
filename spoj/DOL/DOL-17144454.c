#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t,n,x;
	cin>>t;
	x=1;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			while((n/=2)%2==0);
			cout<<"Case "<<x++<<": "<<n<<endl;
		}
		else
		{
			cout<<"Case "<<x++<<": "<<n<<endl;
		}
	}
	return 0;
}