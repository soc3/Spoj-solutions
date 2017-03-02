#include<iostream>
#include<cstdio>
#define size 1000000
#define mod 1000000007

using namespace std;

typedef long long int ll;

ll nCk[size];

ll power(ll a, ll n){
	ll y = 1;
	while(n){
		if(n & 1)
			y = (y * a) % mod;
		a = (a * a) % mod;
		n >>= 1;
	}
	return y;
}

void init(){
	ll twoInverse = power(2, mod - 2);
	nCk[0] = 1;
	nCk[1] = 4;
	for(ll i=2;i<size;i++){
		nCk[i] = 0;
		ll num = ((i+2) * (i+1)) % mod;
		ll den = twoInverse;
		nCk[i] = (num * den) % mod;
		nCk[i] += nCk[i-1];
		nCk[i] %= mod;
	}
}
ll find(int x, int y){
	x -= 3;
	y -= 3;
	if(x < 0 && y < 0)
		return 0;
	if(x < 0)
		x = 0;
	if(x == 0)
		return nCk[y];
	return (nCk[y] - nCk[x-1] + mod) % mod;
}

int main(){
	int t, x, y;
	init();
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &x, &y);
		printf("%lld\n", find(x, y));
	}
	return 0;
}