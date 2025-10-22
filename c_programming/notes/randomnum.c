// SB 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int  main (void){
    srand(time(NULL));
    for(int i =0; i<1; i++){
    int num = rand() %9 +1;
    printf("%d\n", num);
    }
    return 0;
}