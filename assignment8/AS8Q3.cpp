#include <stdio.h>
int main(){
	int n;
	printf("ENTER YOUR DESIRED NUMBER\n");
	scanf("%d",&n);
	printf("Value is %d\n ",n);
	if(n%2==0){
		printf("IT IS DIVISIBLE BY 2");
		}
		else if(n%3==0){
			printf("IT IS DIVISIBLE BY 3");
		}
		else{
			printf("not divisible by 3 or 2 !!!");
		}
return 0;
}
