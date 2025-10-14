//SB 6th function notes
#include <stdio.h>

void birthday(char* name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday %s is now %d\n", name, age);

}

int add(int num_one, int num_two){
    return num_one + num_two;
}

int main(void){
    birthday("Mykel", 15);
    birthday("Lucas", 40);
    birthday("Victoria", 19);
    int addition = add(5,4);
    printf("%d\n", addition);
    printf("%d\n", add(50,37));
    return 0;

}

/*
What a function is
storage containers for actions
Why we use functions
to save space while coding and make alterations in the code eaiser
How to write a function in C
example: void birthday(void){
}
What are arguments and parameters?
parameter - setting a variable inside the function, doesnt work till function is called
arguements -  calls the function
How do arguments and parameters work together?
arguements calls the function so the parameter can work
How to use parameters and arguments in C
example:void birthday(char* name){
}
What are return statements?
replacing the call 
How do return statements change how you define a function in C?
takes whatever is in the return code within the function and place it where its wanted
What do return statements do with the information?
take whats in the return so you can place it wherever
*/
