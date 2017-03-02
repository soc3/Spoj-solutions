#include<stdio.h>
int insertionSort(int arr[], int n)
{
   int i, key, j,c=0;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
       	c++;
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
   return c;
}
int main()
{
	int t,a[1000000],c,i,j,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		c=insertionSort(a,n);
		printf("%d\n",c);
	}
	return 0;
}