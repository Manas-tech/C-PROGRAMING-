#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("ENTER YOUR 5 SBJECTS MARKS\n ");
    printf("YOUR MARKS in PHYSICS OUT OF 100 ");
    scanf("%d",&a);
    printf("YOUR MARKS IN MATHS OUT OF 100 ");
    scanf("%d",&b);
    printf("YOUR MARKS IN CHEMISTRY OUT OF 100 ");
    scanf("%d",&c);
    printf("YOUR MARKS IN COMPUTER SCIENCE OUT OF 100 ");
    scanf("%d",&d);
    printf("YOUR MARKS IN ELECTERICAL ENG. OUT OF 100 ");
    scanf("%d",&e);
    f=a+b+c+d+e;
    if(f>=30)
    {
        printf("PASS , YOUR TOTAL MARKS OUT ARE %d/500",f);
    }
   else {
    printf("fail");
   }
   
   
   
    return 0;
   
}