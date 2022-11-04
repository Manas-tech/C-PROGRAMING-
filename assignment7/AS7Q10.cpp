#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int s;
	printf("ENTER SIDE A");
	scanf("%d",&a);
	printf("ENTER SIDE B");
	scanf("%d",&b);
	printf("ENTER SIDE C");
	scanf("%d",&c);
	printf("YOUR TRIANGLE SIDES ARE %d %d %d \n",a,b,c);
		s=a+b;
	if(s>>c){
	
	printf("THE TRIANGLE IS VAILD");
	}
	else {
		printf("TRIANGLE IS NOT VALID");
	}
	
	
	
		return 0;
	
	}
