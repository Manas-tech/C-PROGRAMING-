#include <stdio.h>

// Q1
// function
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// question
int main()
{
    int a, b;
    printf("Enter the 1st value : ");
    scanf("%d", &a);
    printf("Enter the 2nd value : ");
    scanf("%d", &b);

    printf("The value of a is %d and b is %d (before swapping)\n", a, b);

    swap(&a, &b);

    printf("The value of a is %d and b is %d (after swapping)\n", a, b);
}