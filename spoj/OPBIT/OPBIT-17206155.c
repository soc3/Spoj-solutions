#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,ans1,ans2,y[1000000],k,i,j;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		k=0;
		j=sqrt(a)+1;
		while(j<=sqrt(b))
		{
			y[k++]=abs((j-1)*(j-1)-j*j);
			j++;
		}
		ans1=y[0];
		ans2=y[0];
		for(i=1;i<k;i++)
		{
			ans1&=y[i];
			ans2^=y[i];
		}
		cout<<(ans1&ans2)<<endl;
	}
	return 0;
}