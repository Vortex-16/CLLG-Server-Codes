#include <stdio.h>

void bubSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binSearch(int arr[], int low, int high, int item) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == item)
            return mid;  
        if (arr[mid] < item)
            low = mid + 1;  
        else
            high = mid - 1; 
    }
    return -1; 
}

int main() {
    int arr[] = {-11,-5,0,1,5,10,10,15,18,20,23,25,25,28};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int item = 25;
    int result = binSearch(arr, 0, n - 1, item);

    if (result != -1)
        printf("Element %d found at index %d\n", item, result);
    else
        printf("Element %d not found\n", item);

    return 0;
}
