#include<stdio.h>
int main(){
	int a,i,t=0;
	printf("ENTER THE NUMBER \n");
	for(i=1;i<=5;i++){
		scanf("%d",&a);
t=t+a;
		if(a<=-1){
			printf("LOOP BREAK \n");
			printf("THE SUM  IS %d\n",t-a);
			break;
		}	
	}
	if (a>=0)
	{
		printf("THE SUM  IS %d\n",t);
	}
	return 0;
}