#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define mod 1000000007

int main() {
   int n,l;
   LL finalAns,tempAns;
   scanf("%d%d",&n,&l);
   while(n && l)
   {
      tempAns=1;
      finalAns=0;
      for(int i=0; i<l ; ++i)
      {
         tempAns=(tempAns*n)%mod;
         finalAns=(finalAns + tempAns)%mod;
      }
      printf("%lld\n",finalAns);
      scanf("%d%d",&n,&l);
   }
   return 0;
}