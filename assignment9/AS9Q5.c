#include <stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE SIDE OF THE TRIANGLE");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c)
    {
        printf("TRIANGLE IS EQUAL");
        }
 else if(a==b){
            printf("THE TRIANGELE is ISOSCELES");
        }
else{
    printf("THE TRIANGLE IS SCALENE");
}
return 0;


}