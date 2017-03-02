#include <stdio.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
int main(void) {
	// your code goes here
	int e,t,a,b,k,i,j,c[1000000],d[1000000];
	long long sum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&a,&b);
		for(j=0;j<b;j++)
		{
			scanf("%d",&c[j]);
		}
		mergeSort(c,0,b-1);
		for(j=b-1,k=0;j>=0,k<b;j--,k++)
		{
			d[k]=c[j];
		}
		sum=0;
		k=0;
		e=0;
		while(sum<a)
		{
		sum+=d[k];
		k++;
		if(k==b&&sum<a)
		{
			printf("Scenario #%d:\nimpossible\n\n",i+1);
			e++;
			break;
		}
		}
		if(e==0)
		printf("Scenario #%d:\n%d\n\n",i+1,k);
	}
	return 0;
}
