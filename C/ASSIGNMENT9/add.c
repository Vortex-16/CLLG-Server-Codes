#include <stdio.h>

float add(int n, float numerator, float denominator)
{
    if (n == 0)
    {
        return 0; 
    }
    else
    {
        return (numerator / denominator) + add(n - 1, numerator + 2.0, denominator + 2.2);
    }
}

void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float sum = add(n, 2.0, 1.3);
    printf("The sum of the series is: %.3f\n", sum);
}

//OUTPUT:
// Enter the number of terms: 1
// The sum of the series is: 1.538

