
int calStringlen(char *ptr)
{
    int count = 0;
    for (int i = 0; *ptr != '\0'; i++, *ptr++)
    {
        count++;
    }
    return count;
}

// question
int main()
{
    char a[150];
    printf("Enter a string to calculate its length : ");
    gets(a);

    printf("The length of string is %d\n", calStringlen(a));
}
