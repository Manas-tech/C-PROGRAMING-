/**
 * C program to print all natural numbers from 1 to n
 */

#include <stdio.h>

int main()
{
    int i, n;

    
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

    
    for(i=n; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
