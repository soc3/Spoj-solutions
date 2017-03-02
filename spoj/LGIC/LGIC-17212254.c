#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll n)
{
	if(n==0)   return 1;
	else       return n*fact(n-1);
}
int main() {
	// your code goes here
	ll n;
	cin>>n;
	cout<<(ll)(fact(n)+pow(2,n)-n);
	return 0;
}