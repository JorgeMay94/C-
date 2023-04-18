/*
When using printf in c there are differente ways of displaying data

%i,%d = indicates display value is an integer
%f = indicates display value is a float
%e= indicates display value is a double
%g = indicates display value is a double
%c = indicates display value is a character

if you don't specify the right variable type the printed output will not match the actual variable value
*/

#include <stdio.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    char charstring[] = "hola";

    printf("Integer Var = %i\n", integerVar);
    printf("Floating Var = %f\n", floatingVar);
    printf("Double Var = %e\n", doubleVar);
    printf("Char Var = %c\n", charVar);
    printf("String Var= %s", charstring);
}