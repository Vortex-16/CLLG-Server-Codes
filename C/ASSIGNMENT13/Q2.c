#include <stdio.h>

void bubsort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void main()
{
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Before sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);  
    }
    printf("\n");  
    
    bubsort(arr, n);
    
    printf("After sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);  
    }
    printf("\n");  
}

// OUTPUT:
// Enter the number of elements: 5
// Enter the elements: 9 8 2 5 3
// Before sorting: 9 8 2 5 3 
// After sorting: 2 3 5 8 9 