#include <stdio.h>

int year(int yr)
{
    if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}
void main()
{
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);
    if (year(yr) == 1) {
        printf("%d is a leap year.\n", yr);
        printf("1");
    } else {
       
        printf(" ");
        printf("%d is not a leap year.\n", yr);
    }
}