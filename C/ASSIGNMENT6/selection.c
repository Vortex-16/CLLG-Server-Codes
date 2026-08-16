#include <stdio.h>

void main()
{
    int arr_size, i, j, si;
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
        si=arr[i];
        for (j = i+1; j < arr_size; j++)
        {
            if (arr[j] < si)
            {
                si = arr[j];
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The selection sorted array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// OUTPUT:
// Enter the array size: 5
// Enter the array Elements:  5 4 3 2 1
// The selection sorted array is: 1 2 3 4 5

// Time Complexity: O(n^2)
// Space Complexity: O(1) as we are using a constant amount of space for the    variables.
// This code implements the selection sort algorithm to sort an array of integers in ascending order.
// The algorithm divides the input array into two parts: a sorted part and an unsorted part. It repeatedly selects the smallest (or largest, depending on the order) element from the unsorted part and moves it to the end of the sorted part.
// The outer loop runs n-1 times, where n is the size of the array, and the inner loop runs at most n times in the worst case, leading to a time complexity of O(n^2).
// The space complexity is O(1) since we are using a constant amount of space for the variables.
// This code is efficient for small arrays and provides a simple way to sort elements based on their values. However, it is not the most efficient sorting algorithm for large datasets due to its O(n^2) time complexity. For larger datasets, more efficient algorithms like quicksort or mergesort are generally preferred.