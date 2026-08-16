#include <stdio.h>

void main()
{
    float numerator = 2.0, denominator = 1.3, sum = 0;
    int range;
    printf("Enter the Range: ");
    scanf("%d", &range);
    for (int i = 0; i < range; i++)
    {
        sum += numerator / denominator;  
        numerator += 2.0;               
        denominator += 2.2;             
    }
    printf("The sum of the series is: %.3f\n", sum);
}
