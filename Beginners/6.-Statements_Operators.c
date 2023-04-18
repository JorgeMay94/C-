
/*
? Operators and operands
Operators are functions that use a symbolic name, perform mathematical or logical functions. 
    Operands are the arguments of an operator.
*/
/*
? Expressions
Expresions are a combination of operators and operands. Every expresion has a value and they
usually return a value
Examples: 
-6
4+21
q>3

? Statements
Are instructions to the computer, in C they end with a semicolon. 
*/

#include <stdio.h>

int main(){
    int A = 2;
    int B = 3;
    int sum, substract, multiply,divide,reminder,increment,decrement;
    
    sum = A+B;
    substract = B-A;
    multiply = A*B;
    divide = B/A;
    reminder = B%A;
    increment = A++;
    decrement = B--;

    return 0;

    

}