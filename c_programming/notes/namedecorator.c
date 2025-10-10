// SB 6th name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];
    char decoration[] = "--";
    char decoratedname[150];
    
    printf("What is your name?: \n");
    scanf("%s", name);
    
    strcat(decoratedname, decoration);
    strcat(decoratedname, name);
    strcat(decoratedname, decoration);
    printf("Decorated name= %s\n",decoratedname);



    return 0;
}