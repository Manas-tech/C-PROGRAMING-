#include <stdio.h>  
int main ()  
{  
char str[30];  
int i;  
printf (" Enter the string: ");  
scanf (" %s", &str); // take a string  
      
 // use for loop to change string from upper case to lower case  
 for ( i = 0; i <= strlen (str); i++)  
 {  
// The ASCII value of a is 97 and z is 122  
 if (str[i] >= 97 && str[i] <= 122)  
 str[i] = str[i] - 32; /* add 32 to string character to convert into lower case. */  
 }  
printf (" \n Lower Case to Upper case string is: %s", str);  
return 0;  
}  