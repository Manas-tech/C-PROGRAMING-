#include <stdio.h>
int main(){
int a,b,c,d;
printf("ENTER THE DIGIT");
scanf("%d",&a);
b=a%10;
printf("UNIT DIGIT OF THE NUMBER IS %d \n",b);
c=a%100;
d=c/10;
printf("THE TEN'S PLACE OF THE DIGIT IS %d",d);

return 0;
}