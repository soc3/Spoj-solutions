#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	double R, C, r, b;
	scanf("%lf %lf", &r, &b);
	R = ((r+4.0) + sqrt((r+4.0)*(r+4.0) - 16.0*(b+r))) / 4.0;
	C = (b+r) / R;
	if(R > C) printf("%.0lf %.0lf\n", R, C);
	else printf("%.0lf %.0lf\n", C, R);
	return 0;
}