#include <stdio.h>
int main(){
int d;
int a ;
int b;
int x;
printf("ENTER TWO NUMBER'S\n");
scanf("%d %d",&a,&b);
printf("SELECT THE OPERATION\n1-ADD\n2-DIFFRENCE\n3-MULTIPLICATION\n");
scanf("%d",&d);
switch(d)
{
case 1:{
    
    x=a+b;
    printf("%d\n",x);
    break;
}
case 2:{
    x=a-b;
    printf("%d\n",x);
    break;
}
case 3:{
    x=a*b;
    printf("%d\n",x);
    break;
}
default:{printf("ENTER NUMBER BETWEEN 1-7 ONLY\n");}
}
printf("HAVE A NICE DAY");
    return 0;
}