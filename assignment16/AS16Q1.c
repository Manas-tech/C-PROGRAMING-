#include<stdio.h>
int total(int);
int main(){
	int a,number;
	number=total(a);
}
int total(int a){
	int i,total=0;
	printf("THE FIRST  10 NATURAL NUMBERS ARE \n");
	for(i=1;i<=10;i++){
		printf("%d \n",i);
		total=total+i;
	}
	printf("THE TOTAL IS %d\n",total);
}