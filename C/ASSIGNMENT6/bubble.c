#include <stdio.h>

void main()
{
    int arr_size, i, j, a, b, c = 0;
    printf("Enter the array size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    printf("Enter the array Elements:  ");
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < arr_size-1; i++)
    {
        for (j = 0; j < arr_size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    printf("The bubble sorted array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// OUTPUT:
// Enter the array size: 5
// Enter the array Elements:  5 4 3 2 1
// The bubble sorted array is: 1 2 3 4 5

//Time Complexity: O(n^2)
//Space Complexity: O(1) as we are using a constant amount of space for the variables.
// This code implements the bubble sort algorithm to sort an array of integers in ascending order.
// The algorithm repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
// The pass through the list is repeated until the list is sorted.
// The outer loop runs n-1 times, where n is the size of the array, and the inner loop runs n-i-1 times, leading to a time complexity of O(n^2).
// The space complexity is O(1) since we are using a constant amount of space for the variables.