#include <stdio.h>
int main()
{
int s;
typedef struct student
{
int Id;
char sname[50];
int srollno;
char mobileno[15];
}
sd;
sd stdu[2];
printf("ENTER THE NUMBER OF STUDENT YOU WANT DETAIL'S FOR :\n");
scanf("%d",&s);
//-------------------ENTER THE VALUES----------------------------
    for (int i = 0; i < s; i++)
    {
    printf("\nEnter the Id of  Student %d : ",i+1);scanf("%d",&stdu[i].Id);
    printf("Enter the name of Student %d : ",i+1);scanf("%s",&stdu[i].sname);
    printf("Enter the rollno of Student %d : ",i+1);scanf("%d",&stdu[i].srollno);    
    printf("Enter the Mobile number of Student %d : ",i+1);scanf("%s",&stdu[i].mobileno);    
    }
//-----------------------print the values-------------------------------------   
    for (int i = 0; i < s; i++)
    {
    printf("\nThe data of Student %d is : \n",i+1);
    printf("Id = %d\nname = %s\nrollno = %d\nMobile number = %s \n",stdu[i].Id,stdu[i].sname,stdu[i].srollno,stdu[i].mobileno);
    printf("\n");
    }
return 0;
}
