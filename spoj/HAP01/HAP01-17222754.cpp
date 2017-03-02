#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#include<list>
#include<algorithm>

#define VI vector<int>
#define VF vector<float>
#define VD vector<double>
#define VC vector<char>
#define VVI vector<VI>
#define VVF vector<VF>
#define VVD vector<VD>
#define VVC vector<VC>
#define SI set<int>
#define SF set<float>
#define SD set<double>
#define SC set<char>
#define SSI set<SI>
#define SSF set<SF>
#define SSD set<SD>
#define SSC set<SC>
#define STI stack<int>
#define STF stack<float>
#define STD stack<double>
#define STC stack<char>
#define STSTI stack<STI>
#define STSTF stack<STF>
#define STSTD stack<STD>
#define STSTC stack<STC>

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

int find_diff(LLU val){
	int a=0, b=0, odd = 1;
	while(val){
		if((val & 1) && odd)
			a++;
		else if((val & 1) && !odd)
			b++;
		val >>= 1;
		odd ^= 1;
	}
	return abs(a-b);
}

int main(){
	
	int t, k, diff, cnt;
	LLU m, n;
	
	scanf("%d", &t);
	while(t--){
		cnt = 0;
		scanf("%lld%lld%d", &m, &n, &k);
		for(LLU i=m;i<=n;i++){
			diff = find_diff(i);
			if(diff == k)
				cnt++;
		}
		printf("%d\n", cnt);
	}
    return 0;
}