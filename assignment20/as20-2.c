#include<stdio.h>
int main(){
        typedef struct employee{
        int id;
        char name[50];
        float salary;
    }ep;
     ep e1,e2,e3;
  //---------------------------scan value--------------------------------------------------------   

    printf("Enter the Id of Employee 1 :\n ");scanf("%d",&e1.id);
    printf("Enter the Name of Employee 1 :\n ");scanf("%s",&e1.name);
    printf("Enter the Salary of Employee 1 :\n ");scanf("%f",&e1.salary);    

    printf("Enter the Id of Employee 2 : \n");scanf("%d",&e2.id);
    printf("Enter the Name of Employee 2 : \n");scanf("%s",&e2.name);
    printf("Enter the Salary of Employee 2 : \n");scanf("%f",&e2.salary);    

    printf("Enter the Id of Employee 3 : \n");scanf("%d",&e3.id);
    printf("Enter the Name of Employee 3 : \n");scanf("%s",&e3.name);
    printf("Enter the Salary of Employee 3 : \n");scanf("%f",&e3.salary);

//---------------------------print value-------------------------------------------------------- 
    printf("The data of e1 is : \n");
    printf("Id = %d\nName = %s\nSalary = %.1f\n",e1.id,e1.name,e1.salary);

    printf("The data of e2 is : \n");
    printf("Id = %d\nName = %s\nSalary = %.1f\n",e2.id,e2.name,e2.salary);

    printf("The data of e3 is : \n");
    printf("Id = %d\nName = %s\nSalary = %.1f\n",e3.id,e3.name,e3.salary);
return 0;
}