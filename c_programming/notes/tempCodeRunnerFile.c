int main(void) {
    float celsius;
    float farhenheit;
    printf("Whats the temperature in celsius? \n");
    scanf("%f", &celsius);
    farhenheit = celsius * 1.8 + 32;
    printf("The fahrenheit temperature is, %f", farhenheit);
    return 0;
}