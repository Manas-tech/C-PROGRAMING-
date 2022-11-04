#include <stdio.h>
int main(){
    int a;
    printf("ENTER THE NUMBER");
    scanf("%d",&a);
    if(a>1 && a%10==0 )
    {
        printf("POSITIVE AND DIVISIBLE BY 10");
    }
    else if(a>1)
    {
        printf("POSITIVE");
        }
         else if(a==0)
    {
        printf("ZERO");
        }

        else 
{
    printf("NEGATIVE");
}
return 0;
}