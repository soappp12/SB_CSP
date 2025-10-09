// SB 6th financial caculator
#include <stdio.h>
#include <math.h>

int main(void) {
    float income = 4000.0;
    float rent = 100.0;
    float utilities = 70.0;
    float groceries = 150.0;
    float transportation = 350.0;
    float rentpercent = (rent / income)*100;
    float utilitiespercent = (utilities/income)*100;
    float grocerypercent = (groceries/income)*100;
    float transportpercent = (transportation/income) * 100;
    float moneysaved = (income*.2);
    float total = (rent+utilities+transportation+groceries+moneysaved);
    float leftover = (income-total);
    printf("Your rent is $100 and that's: %.1f percent of your income.", rentpercent);
    printf("Your utililties cost $70 and thats: %.1f percent of your income", utilitiespercent);
    printf("Your groceries cost $150 and thats: %.1f percent of your income", grocerypercent);
    printf("Your transportation costs $350 and thats: %.1f percent of your income", transportpercent);
    printf("I save: 20 percent of my income which is: %.1f", moneysaved);
    printf("My leftover money is: %.1f", leftover);
    return 0;
}

