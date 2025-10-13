// SB 6th Loop notes
#include <stdio.h>

int main(void){
    int nums[] = {4,684,1,64,2,8,14,36,456,15};

    for(int x = 0; x < 11; x++){
        printf("%d\n", nums[x]);
    }


    for(int num = 1; num < 11; num++)
    printf("%d\n", num);

    int goose = 6;
    int count = 0;
    while(count != goose){
        printf("Duck\n");
        count++;
    }
    printf("Goose!");

    return 0;
}

/*
 What is a loop?
something that goes till a specefic condition is met
What are the two types of loops?
for loop
while loop
What is iteration
keeps track of the loop
What are arrays? 
in python its lists, but in C a list is an array
a collection of data that we clump together
How do you make lists in C? 
there are no lists, they are called arrays
int nums[] = {4,7,8,1,2,7};
How do you make for loops in C? 
// example of a for loop: for(int x = 0; x < 11; x++){
        printf("%d\n", nums[x]);
    }

How do you make while loops in C?
// example of a while loop:
while(count != goose){
        printf("Duck\n");
        count++;
    }
*/
