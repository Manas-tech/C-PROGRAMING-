#include<stdio.h>
int main()
{ int i;
    typedef struct student
    {
        int Id, Physics_marks, Chemistry_marks,Maths_marks;
        char name[50];

    } sd;

    sd b1, b2, b3, b4, b5;

    printf("Enter the Id of  Student 1 : ");    scanf("%d", &b1.Id);
    printf("Enter the Name of Student 1 : ");    scanf("%s", &b1.name);
    printf("Enter the Physics marks of Student 1 : ");   scanf("%d", &b1.Physics_marks);
    printf("Enter the Chemistry marks of Student 1 : ");    scanf("%d", &b1.Chemistry_marks);
    printf("Enter the Maths marks of Student 1 : ");    scanf("%d", &b1.Maths_marks);

    printf("Enter the Id of Student 2 : ");    scanf("%d", &b2.Id);
    printf("Enter the Name of Student 2 : ");    scanf("%s", &b2.name);
    printf("Enter the Physics marks of Student 2 : ");   scanf("%d", &b2.Physics_marks);
    printf("Enter the Chemistry marks of Student 2 : ");    scanf("%d", &b2.Chemistry_marks);
    printf("Enter the Maths marks of Student 2 : ");    scanf("%d", &b2.Maths_marks);

    printf("Enter the Id of Student 3 : ");    scanf("%d", &b3.Id);
    printf("Enter the Name of Student 3 : ");    scanf("%s", &b3.name);
    printf("Enter the Physics marks of Student 3 : ");   scanf("%d", &b3.Physics_marks);
    printf("Enter the Chemistry marks of Student 3 : ");    scanf("%d", &b3.Chemistry_marks);
    printf("Enter the Maths marks of Student 3 : ");    scanf("%d", &b3.Maths_marks);

    printf("Enter the Id of Student 4 : ");    scanf("%d", &b4.Id);
    printf("Enter the Name of Student 4 : ");    scanf("%s", &b4.name);
    printf("Enter the Physics marks of Student 4 : ");   scanf("%d", &b4.Physics_marks);
    printf("Enter the Chemistry marks of Student 4 : ");    scanf("%d", &b4.Chemistry_marks);
    printf("Enter the Maths marks of Student 4 : ");    scanf("%d", &b4.Maths_marks);

    printf("Enter the Id of Student 5 : ");    scanf("%d", &b5.Id);
    printf("Enter the Name of Student 5 : ");    scanf("%s", &b5.name);
    printf("Enter the Physics marks of Student 5 : ");   scanf("%d", &b5.Physics_marks);
    printf("Enter the Chemistry marks of Student 5 : ");    scanf("%d", &b5.Chemistry_marks);
    printf("Enter the Maths marks of Student 5 : ");    scanf("%d", &b5.Maths_marks);

    printf("The data of Student 1 is : \n");
    printf("Id = %d name = %s\nChemistry marks = %d Physics marks = %d Maths marks =%d ",b1.Id,b1.name,b1.Chemistry_marks,b1.Physics_marks,b1.Maths_marks);
    printf("\n\n\n");

    printf("The data of Student 2 is : \n");
    printf("Id = %d name = %s\nChemistry marks = %d Physics marks = %d Maths marks =%d ",b2.Id,b2.name,b2.Chemistry_marks,b2.Physics_marks,b2.Maths_marks);
    printf("\n\n\n");

    printf("The data of Student 3 is : \n");
    printf("Id = %d name = %s\nChemistry marks = %d Physics marks = %d Maths marks =%d ",b3.Id,b3.name,b3.Chemistry_marks,b3.Physics_marks,b3.Maths_marks);
    printf("\n\n\n");


    printf("The data of Student 4 is : \n");
    printf("Id = %d name = %s\nChemistry marks = %d Physics marks = %d Maths marks =%d ",b4.Id,b4.name,b4.Chemistry_marks,b4.Physics_marks,b4.Maths_marks);
    printf("\n\n\n");

    printf("The data of Student 5 is : \n");
    printf("Id = %d name = %s\nChemistry marks = %d Physics marks = %d Maths marks =%d ",b5.Id,b5.name,b5.Chemistry_marks,b5.Physics_marks,b5.Maths_marks);
    printf("\n\n\n");

//Q6 working from here :::: 
    float per[5];
    per[0]=((b1.Chemistry_marks+b1.Physics_marks+b1.Maths_marks) * 100.0 )/300.0;
    per[1]=((b2.Chemistry_marks+b2.Physics_marks+b2.Maths_marks) * 100.0 )/300.0;
    per[2]=((b3.Chemistry_marks+b3.Physics_marks+b3.Maths_marks) * 100.0 )/300.0;
    per[3]=((b4.Chemistry_marks+b4.Physics_marks+b4.Maths_marks) * 100.0 )/300.0;
    per[4]=((b5.Chemistry_marks+b5.Physics_marks+b5.Maths_marks) * 100.0 )/300.0;

    for ( i = 0; i < 4; i++)
    {
        printf("The percentage of student no. %d is : %.1f %%",i+1,per[i]);
    }
    

    return 0;
}
