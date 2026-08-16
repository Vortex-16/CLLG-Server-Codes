#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1 and 1! = 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int permutation(int n, int r) {
    return factorial(n) / factorial(n - r); // nPr = n! / (n - r)!
}
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r)); // nCr = n! / (r! * (n - r)!)
}
void main()
{
    int n, r;
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);
    printf("Permutation (nPr): %d\n", permutation(n, r));
    printf("Combination (nCr): %d\n", combination(n, r));
}