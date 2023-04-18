#include  <stdio.h>

int main()
{
    // Defining variables
    char str[100];  // defining variable "str" which is a string array of 100 characters
    int i;          // defining variable "i" of type int
    
    printf("Enter a value:");
    scanf("%d %s", &i, str);    // assigning the inputs to variables "i" and "str"
    printf("\n You entered: %d::::: %s\n",i,str);   // printing variables "i" and "str"
    // & is used when common type variables are used e.g. floats. not for strings
    
    return 0;
}