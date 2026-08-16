#include <stdio.h>
#include <math.h>
void main()
{
    int arr_size, i, sum = 0;
    float mean, stddev, variance = 0.0;
    printf("Enter the array size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    printf("Enter the array Elements:  ");
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    mean = (float)sum / arr_size;
    
    // Calculate variance
    for (i = 0; i < arr_size; i++)
    {
        variance += (arr[i] - mean) * (arr[i] - mean);
    }
    variance /= arr_size;
    
    // Calculate standard deviation
    stddev = sqrt(variance);
    
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stddev);
    printf("Variance: %.2f\n", variance);
}