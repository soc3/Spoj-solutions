#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,f=0,c;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            a[i]= 0;
        for(i=0;i<n;i++)
        {
             scanf("%d",&c);
             if(c<n)
             {
                 if(a[c]==0)
                    a[c]=1;
                 else
                    a[n-1-c]=1;
             }

        }
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                f=1;
        }
        if(f==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
  