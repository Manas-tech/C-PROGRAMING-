#include<stdio.h>
int main(){
    typedef struct employee{
        int id;
        char name[50];
        float salary;
    }ep;
    ep e1 = {1,"manas",150000};
    ep e2 = {2,"kartik",150898};
    ep e3 = {3,"harshal",500362};
    printf("The data of Employee 1 is : \n");
    printf("Id = %d\nName = %s\nSalary = %.1f\n",e1.id,e1.name,e1.salary);

    printf("The data of Employee 2 is : \n");
    printf("Id = %d\nName = %s\nSalary = %.1f\n",e2.id,e2.name,e2.salary);

    printf("The data of Employee 3 is : \n");
    printf("Id = %d\nName = %s\nSalary = %.1f\n",e3.id,e3.name,e3.salary);

    return 0;
}
