#include<bits/stdc++.h>
using namespace std;

int main()

{

    char a[10];

    scanf("%s",a);



    while(1)

    {

        if(a[0]== '0' && a[1]== '0')

            return 0;



        long long int x;

        x = 10 * (a[0] - '0') + (a[1]- '0');

        x = x * pow(10, (a[3]- '0'));

        int m;

        m = log2(x);
        long long int n;

        n = pow(2,m);

        long long int ans;
        ans = 2*(x - n) + 1;

        printf("%lld\n",ans);

        scanf("%s",a);

    }



}
