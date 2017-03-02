#include<stdio.h>
void merge(long int arr[], long  int l, long int m, long int r)
{
   long  int i, j, k;
    long int n1 = m - l + 1;
    long int n2 =  r - m;

    /* create temp arrays */
    long int L[n1], R[n2];

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
void mergeSort(long int arr[], long int l, long int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
	long int t,n,i,j,k,c,a[1000000];
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%ld",&a[j]);
		}
		c=0;
		mergeSort(a,0,n-1);
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[k]==a[j]*2&&(a[k]!=0||a[j]!=0))
				{
					a[k]=0;
					a[j]=0;
					c++;
					break;
				}
			}
		}
		printf("%ld\n",c);
	}
}