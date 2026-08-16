#include <stdio.h>
#include <math.h>

void roots(int a, int b, int c)
{
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return;
    }

    double discriminant = (b * b) - 4 * a * c;

    if (discriminant > 0) {
        double r1 = (-b + sqrt(discriminant)) / (2 * a);
        double r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1: %lf\n", r1);
        printf("Root 2: %lf\n", r2);
    } else if (discriminant == 0) {
        double r = -b / (2 * a);
        printf("The roots are real and equal:\n");
        printf("Root: %lf\n", r);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex:\n");
        printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
    }
}

void main()
{
    int a, b, c;
    printf("Enter the value of quadratic equation a, b & c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    roots(a, b, c);
}
