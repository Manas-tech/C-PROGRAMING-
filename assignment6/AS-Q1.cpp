#include <stdio.h>
int main() {
 Rectangle();
 square();
 circle();
 triangle();
return 0;
  
}
void Rectangle(){
	int l,b,Rarea,Rperi;
	printf("enter values for rectangle");
	scanf("%d %d",&l,&b);
	Rarea= l*b;
	Rperi= 2*(l+b);
	printf("Raera =%d and Rperi = %d\n",Rarea,Rperi);
}
void square(){
	int l,Rarea,Rperi;
	printf("enter values for square");
	scanf("%d ",&l);
	Rarea= l*l;
	Rperi= 4*l;
	printf("Raera =%d and  Rperi = %d\n",Rarea,Rperi);
}
void circle(){
	int l,Rarea,Rperi;
	printf("enter values for circle");
	scanf("%d ",&l);
	Rarea= 3*l*l;
	Rperi= 2*3*l;
	printf("Raera =%d and Rperi = %d\n",Rarea,Rperi);
}
void triangle(){
	int l,b,h,Rarea;
	printf("enter values for sums of the side");
	scanf("%d %d %d ",&l,&b,&h);
	Rarea= l+b+h;
	printf("Raera =%d ",Rarea);
}



