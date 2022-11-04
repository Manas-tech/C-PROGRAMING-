#include <stdio.h>
int main(){
int d;
int a ;
int b;
int x;
int q;

printf("MENU\n1-BURGER\n2-FRECNH FRIES\n3-PIZZA\n4-SANDWICH\n");
scanf("%d",&d);
switch(d)
{
case 1:{
    printf("ENTER THE QUANTITY OF BURGERS\n");
    scanf("%d",&q);
    x=200*q;
    printf("YOUR TOTAL BILL FOR %d BURGERS IS %d\n",q,x);
    break;
}
case 2:{
   printf("ENTER THE QUANTITY OF FRENCH FRIES\n");
    scanf("%d",&q);
    x=50*q;
    printf("YOUR TOTAL BILL FOR %d FRENCH FRIES IS %d\n",q,x);
}
case 3:{
   printf("ENTER THE QUANTITY OF PIZZA\n");
    scanf("%d",&q);
    x=500*q;
    printf("YOUR TOTAL BILL FOR %d PIZZA IS %d\n",q,x);
    break;
}
case 4:{
   printf("ENTER THE QUANTITY OF SANDWICH\n");
    scanf("%d",&q);
    x=150*q;
    printf("YOUR TOTAL BILL FOR %d SANDWICH IS %d\n",q,x);
    break;
}
default:{printf("ENTER SOME VALID CHOICE\n");}
printf("HAVE A NICE DAY");
}
printf("HAVE A NICE DAY");
    return 0;
}