#include<stdio.h>


long long int a[1000010];


int b[1000010];


int main()


{


    int n,i;


    scanf("%d",&n);




    b[0] = 0;


    for(i=0;i<n;i++)


    {


        scanf("%lld",&a[i]);


        if(i>0)


        {


            if(a[i]>a[i-1])


                b[i] = 1;


            else if(a[i] < a[i-1])


                b[i] = -1;




            else


                b[i] = 0;


        }


    }


    int c=1,sign=0;


    for(i=1;i<n;i++)


    {


        if((sign == 0) && (b[i] != 0))


        {


               c++;


               sign = b[i];


        }


        else if((sign ==1) && (b[i]== -1))


        {


            c++;


            sign = b[i];


        }


        else if((sign == -1) && (b[i] == 1))


        {


            c++;


            sign = b[i];


        }


    }


    printf("%d\n",c);


    return 0;


}