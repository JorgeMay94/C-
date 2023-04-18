/*
? IF Satements
"IF" statements are defined by using the reserved word "if" which at the same time is a function, hence requires
parenthesis for defining the condition to be check and squiggly brackets for the statements inside the if funciton.
"IF"statements don't require a subsequent conditional (e.g. else). However, they can be combined with
different conditional statements like:

"else if"
"else"
*/

/*
? Switch Statement
"If" conditional is good when comparing two alternatives, however, when multiple case aligned the switch 
conditional allows to check for multiple cases inside the switch conditional
switch (expression)
{
    case #: The switch is divided into multiple cases. Each case presents a specific value
            the programer wants to assign an action too in case the variable to be analyses matches the
            assigned case
        break; After the statement of each case. Is necessary to add a break to indicate the termination
               of the case routine
    default : If the variable value is not within the specified cases. The code will do the specific routine.
    
}

*/

#include <stdio.h>
int main(){
    // this program asks the user to guess a value between 0 and 10.

    int user_input, expected_value, assert;
    assert = 0;

    printf("Input a number from zero to three: ");
    while ( assert==0)
    {
        scanf("%d", &user_input);
        switch (user_input)
        {
            case 0:
                printf("Zero is not the number"); 
                break;
            case 1:
                printf("One is not the number");
                break;
            case 2:
                printf("Two is the number !! Congrats :)");
                assert=1;
                break;
            case 3:
                printf("Three is not the number");
                break;
            default:
                printf("The number is out of range!");
                break; 
        }
        if (assert==0)
            {
                printf("\nTry again!");
            }
    }
}

int if_example()
{
    /*
    This function tells the user if the input is an even or odd number
    */
    int number_to_test, remainder; 
    
    printf("Enter your number to be tested:");
    scanf("%i", &number_to_test);
    remainder = number_to_test%2;
    if (remainder==0)
    {
        printf("The number is even. \n");
    }
    // else
    // {
    //     printf("The number is odd.\n");
    // }
    return 0;
}
