#include <stdio.h>
int main(){
int d;
int a;
int o;
printf("ENTER A NUMBER\n");
scanf("%d",&a);
printf("PRESS 1 TO COVERT");
scanf("%d",&d);
switch(d)
{
case 1:{
    o=a*(-1);
    printf("%d",o);
    break;
}

default:{printf("INVALID OPERATION\n");}
}
    return 0;
}