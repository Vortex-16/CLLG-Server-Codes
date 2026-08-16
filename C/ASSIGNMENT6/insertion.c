#include <stdio.h>

void main()
{
    int arr_size, i, j, current, prev;
    printf("Enter the array size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    printf("Enter the array Elements:  ");
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < arr_size; i++)
    {
            current = arr[i];
            prev = i - 1;
            while (prev >= 0 && arr[prev] > current)
            {
                arr[prev + 1] = arr[prev];
                prev--;
            }   
            arr[prev + 1] = current;
    }
    printf("The insertion sorted array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// OUTPUT:
// Enter the array size: 5
// Enter the array Elements:  5 4 3 2 1
// The insertion sorted array is: 1 2 3 4 5

// Time Complexity: O(n^2)
// Space Complexity: O(1) as we are using a constant amount of space for the variables. 
// This code implements the insertion sort algorithm to sort an array of integers in ascending order.
// The algorithm builds a sorted array one element at a time by repeatedly taking the next element and inserting it into the correct position in the already sorted part of the array.
// The outer loop runs n-1 times, where n is the size of the array, and the inner loop runs at most n times in the worst case, leading to a time complexity of O(n^2).