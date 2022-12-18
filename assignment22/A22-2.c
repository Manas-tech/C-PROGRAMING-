//-------------------------------------------------------------------------------
// Q2

// function
int findmax(int *ptr1, int *ptr2)
{
    if (*ptr1 >= *ptr2)
    {
        return *ptr1;
    }
    else
    {
        return *ptr2;
    }
}

// question
int main()
{
    int a, b;
    printf("Enter the 1st value : ");
    scanf("%d", &a);
    printf("Enter the 2nd value : ");
    scanf("%d", &b);

    printf("The max value is %d\n", findmax(&a, &b));
}