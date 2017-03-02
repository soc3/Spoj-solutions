#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265
//   H = u^2 sin^2(x)/2g
//	 R = u^2 sin (2x)/g

int main() {
   int t;
   scanf("%d",&t);
   double v0,k1,k2;
   while(t--)
   {
      scanf("%lf%lf%lf",&v0,&k1,&k2);
      /*Found using differentiation*/
      double angle = (PI - atan(4*k1/k2))/2;
      double H = v0*v0*sin(angle)*sin(angle)/20;
      double R = v0*v0*sin(2*angle) /10;
      printf("%.3lf %.3lf\n",angle,k1*R+k2*H);
   }
   return 0;
}