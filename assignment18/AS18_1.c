#include<stdio.h>

int main()
{
    int arr[10], i, sum = 0;
    printf("Enter array elements\n");
    for(i = 0; i <10; i++)
          scanf("%d",&arr[i]);
    for(i = 0; i <10; i++)
          sum = sum + arr[i]; 
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}