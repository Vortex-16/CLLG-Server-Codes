#include <stdio.h>

int myPow(int x, int n) {
    if (n == 0) {
        return 1; // Base case: x^0 = 1
    } else if (n < 0) {
        return 1 / myPow(x, -n); // Handle negative exponent
    } else {
        return x * myPow(x, n - 1); // Recursive case
    }
}
void main()
{
    int x, n;
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    int result = myPow(x, n);
    printf("%d^%d = %d\n", x, n, result);
}