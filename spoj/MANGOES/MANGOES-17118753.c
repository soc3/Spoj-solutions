#include <stdio.h>

int main(void) {
 long long int t,n,m;
 scanf("%lld",&t);
 while(t--)
 {
  scanf("%lld",&n);
  m = (n -1)/2;
  m = m*m;
  m = m %n;
  printf("%lld\n",m);
 }
 return 0;

}
