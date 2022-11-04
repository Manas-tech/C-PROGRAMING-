#include <stdio.h>
int main(){
    int a;
    printf("ENTER THE NUMBER");
    scanf("%d",&a);
    if (a%2==1 && a%5==0)
    {
        printf("ODD AND DIVISIBLE BY 5");
    }
    else if(a%2==0 && a%3==0) 
    {
        printf("EVEN AND ALSO DIVISIBLE BY 3");
    }
    else if (a%2==0) {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    return 0;
}