#include<stdio.h>
int circle(int);
int main(){
	int r,number;
	number=circle(r);
}
int circle(int r){
	//int r
	int area,pi=3;
	printf("ENTER THE RADIUS \n");
	scanf("%d",&r);
	area=pi*r*r;
	printf("AREA OF CIRCLE IS %d\n",area);
	return area;
}
