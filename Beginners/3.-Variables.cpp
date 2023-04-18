/*
Variables in C most be declare before they are used. The most commomon variable types on C are:
-integer: keyword->"int": none-decimal numbers (positive and negative numbers)
-floats: keyword-> "float": numbers that contain decimal place
-doubles: keyword-> "double": Same with float but with larger memory capacity (bigger numbers)
-characters: keyword->"char": characters. Characters are defined in single quotes
-characters: keywords-> "char <string_name>[string size] = "string"" strings used double quotes
-Boolean: keyword-> bool: Binary choices True or False
-Enumerations: keyowrd-> "enum". Like dictionaries in python

Declaring variables in C is done by using the reserved word related to the variable type and then the
variable name
*/
// Example
int x =1;      // defining a single integer variable named 'x'. Initializing variables is done by using "="
int y,z;    // defining multiple integer variables named 'y',z. Initializing variables is not mandatory
bool a = true
/*
The main purposes of defining variables in any programming language is assigning memory locations
of the HW to data. 
*/

int main()
{
    /* code */
    float number = 23.33;
    double larger_number = 1000000000000000.01;
    char word = 'Hi';

    return 0;
}

