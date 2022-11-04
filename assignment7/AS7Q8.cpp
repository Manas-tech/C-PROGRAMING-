#include <stdio.h>
int main(){
	int q;
	int w;
	int e;
	int d;
	printf("ENTER THE VALUE OF A \n ");
	scanf("%d",&q);
	printf("ENTER THE VALUE OF B \n");
	scanf("%d",&w);
	printf("ENTER THE VALUE OF C \n");
	scanf("%d",&e);
	printf("your values of A B  C are these %d %d %d \n",q,w,e);
	d=(w*w)-(4*q*e);
	printf("D OF THE FOLLOWING NUMBERS ARE %d \n",d);
	if (-1>=d)
	{
		printf("THE ROOTS ARE IMAGINARY ");
	}
	 else if(d=0)
	{
		printf("THE ROOTS ARE REAL AND EQUAL");
	}
	else{
		printf("THE ROOTS ARE REAL AND DISTINCT");
	}
	return 0;
}
