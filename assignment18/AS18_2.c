# include <stdio.h>
int  main( )
{
int  a[10],avg,i, sum = 0 ;
printf(" Enter the Numbers :") ;
for (i=0 ; i<10 ; i++)
{
scanf("%d ",& a[i]) ;
}
for (i =0; i<10 ; i++)
{
sum = sum + a[i] ;
avg = sum / 10 ;}
printf("\n Mean of entered Numbers are : %d ",avg) ;
return 0 ;
}
