// SB 6th Variables Notes
#include <stdio.h>

// What is the main difference between declaring variables in Python and C?
 // in C you have to set what type of data the variable holds

// In C, what is the purpose of specifying a data type when declaring a variable?
 // so the variable has the data type set so it knows what it needs to do

// List three common data types used in C and their corresponding format specifiers for printf().
 //int, float, and char 
 // examples: "int num = 4;", "float pi = 3.14;," "char grade = 'A'
// How do you declare and initialize an integer variable named "age" with the value 25 in C?
 // you would put: int age = 25 
// What is the difference between printf() and scanf() functions in C?
 // print just prints what you put for the output and scan takes what the user types in and sets it to be the variable
// Write a C program that asks the user for their name and age, then prints a greeting message with their information.

//int main(void){
//char name[30];
//printf("Please tell me your name: \n");
//scanf("%s", name);
//printf("Hello %s", name);
//return 0;
//}

// How do you add comments in C? What are the two types of comments?
 // you can add comments by doing "//" or using a * and one of the dashes for a multi line comment(describes a purpose of a function)
// What is the purpose of the #include <stdio.h> line at the beginning of a C program?
 //so it can be used for functions for inputs and outputs
// In C, what is the significance of the main() function?
 // to be used as the starting point
// Write a C program that calculates the area of a rectangle. Ask the user to input the length and width, then display the result.
//int main(void) {
    //float length, width, area;
   // printf("Whats the length of the rectangle? \n");
  //  scanf("%f", &length);
   // printf("Whats the width of the rectangle? \n");
   // scanf("%f", &width);
   // area = length * width;
   // printf("The area of the rectangle is, %f", area);
  //  return 0;
//}
    
    

// What is the difference between %d and %f format specifiers in printf()?
// %d is used for integers and %f is used for floats
// How do you print a newline character in C?
 // you put "\n"
// Write a C program that converts temperature from Celsius to Fahrenheit. Ask the user for input in Celsius and display the result in Fahrenheit.
int main(void) {
    float celsius;
    float farhenheit;
    printf("Whats the temperature in celsius? \n");
    scanf("%f", &celsius);
    farhenheit = celsius * 1.8 + 32;
    printf("The fahrenheit temperature is, %f", farhenheit);
    return 0;
}
// What is the purpose of the & symbol when using scanf() to get user input?
 // to store the user data that was inputed
// How do you declare a constant in C? Provide an example.
// you put "const" infront of one of the data types
// example = const float pi = 3.14