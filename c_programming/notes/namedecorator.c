// SB 6th name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];
    char decoration[] = "--";
    printf("What is your name?: \n");
    scanf("%s\n", name);
    strcat(decoration, name, decoration);

    printf("%s\n", name);


    return 0;
}