#include <stdio.h>
int main()
{ 
     int s;
    typedef struct Employee
    {
        int id ,salary;
        char name[50];
        

    } ep;

    ep empl[20];
    printf("ENTER THE NUMBER OF EMPLOYEE YOU WANT DETAIL'S FOR :\n");
    scanf("%d",&s);
    for (int i = 0; i < s; i++)
    {
        printf("\nEnter Id of employee %d : ",i+1);  scanf("%d",&empl[i].id);
        
        printf("Enter the Name of Employee %d : ",i+1); scanf("%s",&empl[i].name);
        
        printf("Enter the Salary of Employee %d: ",i+1);  scanf("%d",&empl[i].salary);   
    }

    for (int i = 0; i < s; i++)
    {
        printf("\nThe data of Employee %d is : \n",i+1);
        printf("Id = %d\nName = %s\nSalary = %d\n",empl[i].id,empl[i].name,empl[i].salary);
    }
    
    

   

    return 0;
}