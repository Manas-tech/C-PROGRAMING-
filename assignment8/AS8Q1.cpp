#include <stdio.h>
int main(){
	int n;
	int m;
	int w;
	printf("ENTER YOUR NUMBER\n");
	scanf("%d",&n);
	printf("ENTER YOUR SECOND NUMBER\n");
	scanf("%d",&m);
printf("ENTER YOUR THIRD  NUMBER\n");
	scanf("%d",&w);
	if(n>>m && n>>w){
		 printf ("YOUR 1 NUMBER IS GREATER");
	}
	else if (m>>n && m>>w)
	{
		printf("YOUR 2 NUMBER IS GREATER");
	}
	else {
		printf(" your 3 NUMBER IS GREATER");
	}
	return 0;
}
