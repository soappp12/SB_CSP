// SB 6th Family loop
#include <stdio.h>

char family[10][50] = { "Sophia", "Camille", "John", "Cristina" };
int i;

int main(void) {
    for (i = 0; i < 4; i++) {
        printf("Hello %s\n", family[i]);
    }
    return 0;
}