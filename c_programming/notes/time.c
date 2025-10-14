// SB 6th time of day
#include <stdio.h>
#include <string.h>

int main(void){
    int time;
    printf("What time is it in military time?: ");
    scanf("%d", &time);

    if(time <= 11){
        printf("Good morning!\n");
    }else if(time <= 17){
        printf("Good afternoon!");
    }else if(time <= 24){
        printf("Good evening!");
    }else{
        printf("Thats more hours that exist in a day");
    }
    return 0;
}