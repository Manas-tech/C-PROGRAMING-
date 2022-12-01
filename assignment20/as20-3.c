#include<stdio.h>
int main(){

    typedef struct student{
        int Id;
        char sname[50];
        int srollno;
        char mobileno[15];


    }sd;

    sd s1,s2,s3,s4;

    printf("Enter the Id of Student 1 : ");scanf("%d",&s1.Id);
    printf("Enter the name of Student 1 : ");scanf("%s",&s1.sname);
    printf("Enter the rollno of Student 1 : ");scanf("%d",&s1.srollno);    
    printf("Enter the Mobile number of Student 1 : ");scanf("%s",&s1.mobileno);    

    printf("\nEnter the Id of Student 2 : ");scanf("%d",&s2.Id);
    printf("Enter the name of Student 2 : ");scanf("%s",&s2.sname);
    printf("Enter the rollno of Student 2 : ");scanf("%d",&s2.srollno); 
    printf("Enter the Mobile number of Student 2 : ");scanf("%s",&s2.mobileno);    

    printf("\nEnter the Id of Student 3 : ");scanf("%d",&s3.Id);
    printf("Enter the name of Student 3 : ");scanf("%s",&s3.sname);
    printf("Enter the rollno of Student 3 : ");scanf("%d",&s3.srollno);
    printf("Enter the Mobile number of Student 3 : ");scanf("%s",&s3.mobileno); 

    printf("\nEnter the Id of Student 4 : ");scanf("%d",&s4.Id);
    printf("Enter the name of Student 4 : ");scanf("%s",&s4.sname);
    printf("Enter the rollno of Student 4 : ");scanf("%d",&s4.srollno);
    printf("Enter the Mobile number of Student 4 : ");scanf("%s",&s4.mobileno); 

    
    


    printf("\nThe data of Student 1 is : \n");
    printf("Id = %d\nname = %s\nrollno = %d\nMobile number = %s \n",s1.Id,s1.sname,s1.srollno,s1.mobileno);
    printf("\n\n\n");

    printf("The data of Student 2 is : \n");
    printf("Id = %d\nname = %s\nrollno = %d\nMobile number = %s \n",s2.Id,s2.sname,s2.srollno,s2.mobileno);
    printf("\n\n\n");

    printf("The data of Student 3 is : \n");
    printf("Id = %d\nname = %s\nrollno = %d\nMobile number = %s \n",s3.Id,s3.sname,s3.srollno,s3.mobileno);
    printf("\n\n\n");


    printf("The data of Student 4 is : \n");
    printf("Id = %d\nname = %s\nrollno = %d\nMobile number = %s \n",s4.Id,s4.sname,s4.srollno,s4.mobileno);
    printf("\n\n\n");

    
    

    return 0;
}