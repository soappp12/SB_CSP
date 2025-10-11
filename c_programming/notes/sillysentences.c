// SB 6th Silly sentences
#include <stdio.h>
#include <string.h>

int main(void){
    char word_1[50];
    char word_2[50];
    char word_3[50];
    char word_4[50];
    char word_5[50];

    printf("Write a noun \n");
    scanf("%s", word_1);

    printf("Write a noun: \n");
    scanf("%s", word_2);

    printf("Write an ajective: \n");
    scanf("%s", word_3);

    printf("Write a noun: \n");
    scanf("%s", word_4);

    printf("Write a noun: \n");
    scanf("%s", word_5);

    printf("If I could go anywhere in the world I would go to %s, for a vacation, I would go to %s. It is %s there. The %s are enormous and the %s is sweet.\n", word_1, word_2, word_3, word_4, word_5);

    return 0;
}

