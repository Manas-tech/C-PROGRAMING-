#include <stdio.h>
int main(){
	int n;
	printf("ENTER YOUR DESIRED NUMBER\n");
	scanf("%d",&n);
	printf("Value is %d\n ",n);
	if(n==0){
		printf("NUMBER IS ZERO");
		}
		else if(-1>=n){
			printf("NUMBER IS NEGATIVE");
		}
		else{
			printf("NUMBER IS POSITIVE");
		}
return 0;
}
