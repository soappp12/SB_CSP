// SB 6th update hello world

#include <stdio.h>

void hiname(char* name){
    printf("Hello, %s\n", name);
}

int main(void) {
    hiname("Sophia");
    hiname("Camille");
    hiname("Ally");
    hiname("Mia");
    hiname("Ella");

    return 0;
}