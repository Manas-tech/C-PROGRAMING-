#include <stdio.h>
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;
       printf("Enter th size of array\n");
       scanf("%d",&n);
       printf("Enter the values\n");
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
    printf("The unique elements found in the array are:\n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
    
}
