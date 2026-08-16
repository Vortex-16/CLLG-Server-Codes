#include<stdio.h>
void main()
{
    int n, p = 1, i;
    printf("Enter the number to check whether it's prime or composite: ");
    scanf("%d", &n);

    if (n <= 1) 
    {
        printf("Neither prime nor composite number.\n");
        return;
    }
    for (i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) {
            p = 0;  // If a divisor is found, it's composite
            break;
        }
    }
    if (p == 1)
        printf("The given number is prime.\n");
    else
        printf("The given number is composite.\n");
}
