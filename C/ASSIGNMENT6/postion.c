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
    printf("The array before changing the position is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the position to change: ");
    int pos1, pos2;
    scanf("%d", &pos1);
    printf("Enter the new position: ");
    scanf("%d", &pos2);
    if (pos1 < arr_size && pos2 < arr_size)
    {
        int temp = arr[pos1];
        arr[pos1] = arr[pos2];
        arr[pos2] = temp;
    }
    else
    {
        printf("Invalid position\n");
    }
    printf("The array after changing the position is: ");  
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// OUTPUT
// Enter the array size: 5
// Enter the array Elements:  1 2 3 4 5 
// The array before changing the position is: 1 2 3 4 5
// Enter the position to change: 1
// Enter the new position: 3
// The array after changing the position is: 1 4 3 2 5

//Time Complexity: O(1) for the position change operation, as it involves a constant number of steps regardless of the size of the array.
//Space Complexity: O(1) as we are using a constant amount of space for the variables.
// This code allows the user to change the position of two elements in an array by specifying their indices. It first prints the array before the change, then prompts the user for the positions to swap, performs the swap if the positions are valid, and finally prints the modified array. The time complexity is O(1) for the position change operation, as it involves a constant number of steps regardless of the size of the array, and the space complexity is O(1) since we are using a constant amount of space for the variables.
// The code is efficient for small arrays and provides a simple way to manipulate array elements based on user input. However, it does not handle cases where the user inputs invalid indices gracefully, as it simply prints "Invalid position" without any further action. This could be improved by adding more robust error handling or input validation to ensure that the indices provided by the user are within the bounds of the array size.
// The code is straightforward and easy to understand, making it suitable for educational purposes or simple applications. It demonstrates basic array manipulation techniques in C, such as accessing and modifying elements based on user input. The use of a temporary variable to swap elements is a common practice in programming, ensuring that the original values are preserved during the swap operation.
// Overall, this code serves as a good example of how to work with arrays in C and how to perform basic operations like swapping elements based on user-defined positions. It can be extended or modified for more complex applications, such as sorting algorithms or data manipulation tasks, where changing positions of elements is a common requirement.