// SB 6th string notes
#include <stdio.h>
#include <string.h>

int main(void){

    char name[] = "Xavier";
    char last_name[25];
    char full_name[100];

    name[2] = 'j';
    printf("Please tell me your last name: \n");
    scanf("%s\n", last_name);

    printf("[%s]\n", full_name);

    strcat(full_name, name);
    printf("[%s]\n", name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("%zu\n", strlen(full_name));
    printf("%zu\n", sizeof(full_name));

    strcmp(last_name, "LaRose"); // returns 0 if equal



    return 0;
}

//What is the difference between a string and a character?
 // strings are lists of characters 
//What types of quotation marks do we need for a string?
 // " " double quotes
//What library do we need to include to access the string functions in C?
 // <string.h>
//List functions the library allows us to use.
 // strlen- current size 
 // size of- how much space you have
 // strcmp- string compare
//How do we concatenate strings in C?
 // stract()
//How do we get individual characters from a string in C?
 // ' ' single quotes