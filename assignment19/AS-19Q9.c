#include<stdio.h>
int main()
{
    int a[100],size,b,c[100],swap;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&size);
    printf("ENTER THE VALUES OF ARRAY 1\n");
    for (b=0;b<size;b++)
    {
        
        scanf("%d",&a[b]);
    }
     printf("ENTER THE VALUES OF ARRAY 2\n");
    for (b=0;b<size;b++)
    {
        
        scanf("%d",&c[b]);
    }
   
    printf("THE FINAL ARRAY IS \n");
    for (b=0;b<size;b++)
    {
        printf("%d\n",a[b]);
    }
     for (b=0;b<size;b++)
    {
        printf("%d\n",c[b]);
    }
    return 0;
}