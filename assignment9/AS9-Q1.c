#include <stdio.h>
int main(){
int q;
int w;
int e;
printf("TYPE ANY TWO NUMBER \n");
scanf("%d %d",&q,&w);
printf("THE TWO NUMBERS  YOU ENTERED ARE %d %d \n",q,w);
if(q>w){
    printf("%d is greater than %d \n ",q,w);
}
else if (q==w){
    printf("BOTH NUMBERS ARE EQUAL");
}

else{
    printf("%d is greater than %d \n",w,q);
}
if(q>=500 && 1000>=q){
    printf("number %d lies betwen 500 t0 1000",q);
}
else if (w>=500 && 1000>=w){
    printf("number %d lies betwen 500 t0 1000",w);
}
else {
    printf("BOTH NUMBER ARE SMALLER THAN 500");
}
return 0;    
}