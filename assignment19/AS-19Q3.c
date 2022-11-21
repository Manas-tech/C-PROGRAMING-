#include<stdio.h>
int main()
{
    int a[100],size,b,c,swap;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&size);
    printf("ENTER THE VALUES TO BE ARRANGED\n");
    for (b=0;b<size;b++)
    {
        
        scanf("%d",&a[b]);
    }
    for (b=0;b<size;b++)
    {

        for (c=b;c<size;c++)
        {
            if(a[b]<a[c])
            {
                swap=a[b];
                a[b]=a[c];
                a[c]=swap;

            }
            
        }
        
    }
    printf("THE ARRANGED VALES ARE \n");
    for (b=0;b<size;b++)
    {
        printf("%d\n",a[b]);
    }
    return 0;
}