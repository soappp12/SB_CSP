// SB 6th Old enough
#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    printf("What is your age?: ");
    scanf("%d", age);

    if(age >= 18){
        printf("You are old enough to vote!\n");
        
    }else if(age > 16){
        printf("You are old enough to drive!\n");

    }else if(age > 15){
        printf("You are old enough to get a learners permit!\n");

    }else if(age >= 4){
        printf("You are old enough to go to school!\n");
        
    }else{
        printf("You still have more to do in life!\n");
    }

    return 0;
}