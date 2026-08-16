#include<stdio.h>

void main() {
    int i, j, sum1, sum2;
    printf("Amicable Pairs are: ");
    for(i = 1; i <= 10000; i++) 
    {
        sum1 = 0;  // Initialize sum1 for each i
        for(j = 1; j <= i / 2; j++) 
        {  // Only check divisors up to i/2
            if(i % j == 0) 
            {
                sum1 += j;  // Accumulate the sum of divisors of i
            }
        }

        sum2 = 0;  // Initialize sum2 for each sum1
        for(j = 1; j <= sum1 / 2; j++) 
        {  // Only check divisors up to sum1/2
            if(sum1 % j == 0) 
            {
                sum2 += j;  // Accumulate the sum of divisors of sum1
            }
        }

        // Check if sum1 and sum2 form an amicable pair and i < sum1 to avoid duplicates
        if(sum2 == i && i != sum1 && i < sum1) 
        {
            printf("(%d, %d)\n", i, sum1);  // Printing each pair on a new line
        }
    }
}
