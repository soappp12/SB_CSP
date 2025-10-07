// SB 6th Expression notes

#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265359;
    
    printf("8/3 = %f\n", (float)8/3); // cast is specifically stating the data type
    printf("8/3 = %1.2f\n", 8/3.0);
    printf("2 ^ 4 = %f\n", (int)pow(2,4));

    printf("%f", 2.4+5);

   return 0;

}

//What is the difference between an integer and a float in C?
//an integer holds a whole number and a float holds a decimal
//How does C handle integer division compared to float division?
// all division is integer division unless its a float
//List the arithmetic operators available in C and their functions.
// + addition
// - subtraction
// / division
// * multiplication
// % modulo(remainder)
//What is the modulus operator, and how is it used?
// its % and its used to find the remainder
//How do you round a float to the nearest integer in C?
// you use the roundf function
//What is type casting in C? Provide an example of explicit type casting.
// it specifes the data type
// example: printf("8/3 = %f\n", (float8/3))
//How do compound assignment operators work in C? List three examples.
// they work by performing an operation on the value
// ex: x+=4, x/=7, x*=9
//What is the purpose of the math.h library? Name three functions it provides.
// the math.h library is to acess math functions.
// pow, sis, log
//How do you print a float with a specific number of decimal places using printf()?
// you need to write something like "%1.2f" so the % and the decimal place with f after
//What happens when you mix integer and float operations in C?
// you get a floating point type
