#include <stdio.h>

int main() {
    int a, b, s, sum, pro, diff;
    double quo;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Press 1 for addition of a and b: a + b\n");
    printf("Press 2 for difference of a and b: a - b\n");
    printf("Press 3 for product of a and b: a * b\n");
    printf("Press 4 for quotient of a and b: a / b\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &s);

    switch (s) {
        case 1:
            sum = a + b;
            printf("The sum of a & b is: %d\n", sum);
            break;
        case 2:
            diff = a - b;
            if (diff < 0)
                diff *= -1;
            printf("The difference of a & b is: %d\n", diff);
            break;
        case 3:
            pro = a * b;
            printf("The product of a and b is: %d\n", pro);
            break;
        case 4:
            if (b == 0) {
                printf("Error: Division by zero is not allowed.\n");
                break;
            }
            quo = (double)a / b;
            printf("The quotient of a and b is: %lf\n", quo);
            break;
        default:
            printf("Enter a valid choice between 1-4.\n");
    }

    return 0;
}
