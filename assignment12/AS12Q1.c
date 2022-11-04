#include <stdio.h>
int main(){
int d;
printf("ENTER THE MONTH NUMBER\n");
scanf("%d",&d);
switch(d)
{
case 1:{
    printf("THE MONTH IS JANUARY\n");
    break;
}
case 2:{
    printf("THE MONTH IS FEBUARY  \n");
    break;
}
case 3:{
    printf("THE MONTH IS  MARCH\n");
    break;
}
case 4:{
    printf("THE MONTH IS APRIL \n");
    break;
}
case 5:{
    printf("THE MONTH IS MAY\n");
    break;
}
case 6:{
    printf("THE MONTH IS JUNE\n");
    break;
}
case 7:{
    printf("THE MONTH IS JULY \n");
    break;
}
case 8:{
    printf("THE MONTH IS AUGUST \n");
    break;
}
case 9:{
    printf("THE MONTH IS SEPTMBER\n");
    break;
}
case 10:{
    printf("THE MONTH IS OCTOMBER\n");
    break;
}
case 11:{
    printf("THE MONTH IS NOVEMBER \n");
    break;
}
case 12:{
    printf("THE MONTH IS DECEMBER \n");
    break;
}


default:{printf("ENTER NUMBER BETWEEN 1-12 ONLY\n");}
}

printf("HAVE A NICE DAY");

    return 0;
}