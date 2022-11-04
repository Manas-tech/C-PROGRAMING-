#include <stdio.h>
int main(){
	int n;
	printf("ENTER YOUR DESIRED NUMBER\n");
	scanf("%d",&n);
	printf("Value is %d\n ",n);
	if(n%5==0){
		printf("IT IS DIVISIBLE BY 5");
		}
		else{
			printf("not divisible by 5 ");
		}
return 0;
}
