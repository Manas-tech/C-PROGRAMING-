#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("ENTER THE THREE SIDES OF THE TRIANGLE\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && c+b>a )
    {
        printf("TRIANGLE IS VALID");
    }    
else{
    printf("TRIANGLE IS NOT VAILD");
}
return 0;




}