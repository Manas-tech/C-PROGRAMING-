#include <stdio.h>
int main(){
int d;
printf("ENTER A NUMBER\n");
scanf("%d",&d);
switch(d)
{
case 1:{
    printf("GOOD\n");
    break;
}
case 2:{
    printf("BETTER\n");
    break;
}
case 3:{
    printf("BEST\n");
    break;
}
default:{printf("INVALID\n");}
}
    return 0;
}