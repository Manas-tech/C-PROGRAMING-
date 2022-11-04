#include<stdio.h>
int total(int);
int main(){
	int a,number;
	number=total(a);
}
int total(int a){
	int i,total=0;
	printf("THE SQUARE OF FIRST 10 NATURAL NUMBERS ARE\n");
	for(i=1;i<=10;i++){
		printf("%d \n",i*i);
		total=total+i*i;
	}
	printf("THE TOTAL IS %d\n",total);
}