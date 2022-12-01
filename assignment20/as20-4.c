#include <stdio.h>
int main(){
    typedef struct Birthday
    {
        int date, month, year;

    } bd;

    bd b1, b2, b3, b4, b5;

    printf("Enter the date of Person 1 : ");    scanf("%d", &b1.date);
    printf("Enter the month of Person 1 : ");   scanf("%d", &b1.month);
    printf("Enter the year of Person 1 : ");    scanf("%d", &b1.year);

    printf("\nEnter the date of Person 2 : ");    scanf("%d", &b2.date);
    printf("Enter the month of Person 2 : ");   scanf("%d", &b2.month);
    printf("Enter the year of Person 2 : ");    scanf("%d", &b2.year);

    printf("\nEnter the date of Person 3 : ");    scanf("%d", &b3.date);
    printf("Enter the month of Person 3 : ");   scanf("%d", &b3.month);
    printf("Enter the year of Person 3 : ");    scanf("%d", &b3.year);

    printf("\nEnter the date of Person 4 : ");    scanf("%d", &b4.date);
    printf("Enter the month of Person 4 : ");   scanf("%d", &b4.month);
    printf("Enter the year of Person 4 : ");    scanf("%d", &b4.year);

    printf("\nEnter the date of Person 5 : ");    scanf("%d", &b5.date);
    printf("Enter the month of Person 5 : ");   scanf("%d", &b5.month);
    printf("Enter the year of Person 5 : ");    scanf("%d", &b5.year);

    printf("\nThe order id date|month|year\n");

    printf("\nBirthdate of person 1 is : %d|%d|%d", b1.date, b1.month, b1.year);
    printf(" \n");

    printf("\nBirthdate of person 2 is : %d|%d|%d", b2.date, b2.month, b2.year);
    printf(" \n");

    printf("\nBirthdate of person 3 is : %d|%d|%d", b3.date, b3.month, b3.year);
    printf(" \n");

    printf("\nBirthdate of person 4 is : %d|%d|%d", b4.date, b4.month, b4.year);
    printf(" \n");

    printf("\nBirthdate of person 5 is : %d|%d|%d", b5.date, b5.month, b5.year);
    printf(" \n");

    return 0;
}