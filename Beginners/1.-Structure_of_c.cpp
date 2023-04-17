// ? Comments
// single line comments in c are made using "//"
/*
comments that involved multiple lines are made using a beginning and end "/*" 
*/

// ? Importing libraries
// importing libraries is done using "#include" and the library name between "<>"" 
                    // # The "#" symbols is a preprocessor directive unique of "C"
#include  <stdio.h> // #include is a preprocessor directive that allows to define variables that don't change
                    /* The ".h" extension are header files. Header files define information about some of 
                       the functions that are provided by that file. Header files specify information that
                       the compiler uses to integrate any predefined functions within a program.
                    */
                    /* "stdio.h" is the standard "C" library header and provides functionality for displaying
                        output among other things. stdio is short for standard input/output.
                    */
                   /* Libraries can be done using: angle brackets <> which tells the preprocessor to look
                      for a file in one or more standard system directories.
                      parenthesis() tells the processor to first look in the current directory 
                   */

// ? Keywords:
/* "void" A void keyword is used to reference an empty data type. We can use the void keyword as the 
          return type of the main function in "C" to depict that the function is not returning any value.
    "int" A int keyword is used to reference an integer data type. We can use the int keyword as the 
          return type of the main function in "C" to depict that the function is returning an integer value.
*/

// ? Functions
void main()
{            
    /*  #1.- Everything that has two parenthesis is a function. The begining and ending of 
             a function on "C" is defined by squiggly bracket
        #2.- All statemenst in "C" most end in semi colons
        #3.- The "main" function is part of all "C" program, everything inside the main function
             is what it will be executed.
        #4.- Indentation doesn't matter in "C" but it is a good practice.
    */
    printf("Hi my name is Jorge");  //printf is a function as well.
}