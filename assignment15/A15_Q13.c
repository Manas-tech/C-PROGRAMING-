#include<stdio.h>
int primenumber(int);
int main(){
	int a,number;
	number=primenumber(a);
}
int primenumber(int a){
	int i,b;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0){
a++;
		}
		if(a==2){
			printf("THE NUMBER IS A PRIME NUMBER \n");
			break;
		}
		else{
			printf("THE NUMBER IS NOT A PRIME NUMBER ");
			break;
		}
	}
}
