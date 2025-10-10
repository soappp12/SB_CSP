// SB 6th Conditional notes
#include <stdio.h>
#include <string.h>

int main(void){

    int grade;
    char name[50];
    printf("What is your grade: ");
    scanf("%d", &grade);

    printf("What is your name: ");
    scanf("%s", &name);
    
    if(grade > 90){
        printf("You have an A!\n");
    }else if(grade >=80){
        printf("You have a B!\n");
    }else{
        printf("You dont have an A :(\n");
    }


    return 0;
}


// What puts something inside of the “if” statement?
 // when its in the curly brackets {}

//How are conditions written in C?
// when we check the condition its in parentheses ()
//How do we write elif conditions in C?
// you write "}else if()}"
//When do else conditions run?
//if it doesnt equal the if and else if statement
//What are the 3 logical operators in C?
// && and
// || or
// ! not



/*
< less than
> greater than
<= less than or equal to
>= greater than or equal to
== equals
!= not equal

*/