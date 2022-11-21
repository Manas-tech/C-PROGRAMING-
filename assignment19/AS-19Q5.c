#include<stdio.h>
int main()
{
    int a[100],size,b,c,swap;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&size);
    printf("ENTER THE VALUES \n");
    for (b=0;b<size;b++)
    {
        
        scanf("%d",&a[b]);
    }
   
    printf("THE ARRAY in REVERSE ORDER  ARE \n");
    for (b=size-1;b>=0;b--)
    {
        printf("%d\n",a[b]);
    }
    return 0;
}