#include <stdio.h>
int main(){
	int n;
	printf("ENTER YOUR DESIRED NUMBER\n");
	scanf("%d",&n);
	printf("Value is %d\n ",n);
	if(n%7==0){
		printf("IT IS DIVISIBLE BY 7");
		}
		else if(n%3==0){
			printf("IT IS DIVISIBLE BY 3");
		}
		else{
			printf("not divisible by 3 or 2 !!!");
		}
return 0;
}
