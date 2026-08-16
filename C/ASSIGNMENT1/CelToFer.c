#include <stdio.h>
void main() {
    int choice;
    float temp, converted_temp;
    printf("Temperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
        {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted_temp = (temp * 9.0 / 5.0) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", converted_temp);
            break;
        } 
        case 2: 
        {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted_temp = (temp - 32) * 5.0 / 9.0;
            printf("Temperature in Celsius: %.2f\n", converted_temp);
            break;
        } 
        default: 
        {
            printf("Invalid choice! Please enter 1 or 2.\n");
        }
    }
}
