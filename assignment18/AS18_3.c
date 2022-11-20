#include<stdio.h>

int main()
{
    int arr[10], i,sumo=0,sum = 0;
    printf("FIRST 10 EVEN NATURAL NUMBERS ARE\n");
   for(i = 0; i <10; i++){
   arr[i]=i+1;
          printf("%d\n",2*arr[i]);}
    for(i = 0; i <10; i++)
          sum = sum +2* arr[i]; 
    printf("\nSum of the array = %d\n",sum);
    printf("FIRST 10 ODD NUMBERS ARE\n");
   for(i = 0; i <10; i++){
   arr[i]=i+1;
          printf("%d\n",2*arr[i]-1);}
    for(i = 0; i <10; i++)
          sumo = sumo +(2* arr[i]-1); 
    printf("\nSum of the array = %d\n",sumo);
    
    return 0;
}