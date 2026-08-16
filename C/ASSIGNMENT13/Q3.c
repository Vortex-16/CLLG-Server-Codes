#include <stdio.h>

void sortArray(int arr[], int size) 
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) 
{
    int i;
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }    
    printf("Original array: ");
    printArray(arr, size);
    sortArray(arr, size);    
    printf("Sorted array: ");
    printArray(arr, size);    
    return 0;
}