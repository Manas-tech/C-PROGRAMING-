#include <stdio.h>
int main() {
    int length ;
    int breath ;
    int area ;
    printf ("enter your length\n");
    scanf ("%d",&length);
    printf ("your length is %d\n",length);
    printf ("enter your breath\n");
    scanf ("%d",&breath);
    printf ("your breath is %d\n",breath);
    area = 2*(length+breath) ;
    printf ("the perimeter of rectangle is%d",area);
return 0;
}
