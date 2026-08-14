#include <stdio.h>

int binarySearch(int a[], int n, int item) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == item)
            return mid;
        else if (item > a[mid])
            low = mid + 1;
        else      
            high = mid - 1;
    }
    return -1;
}


void sort(int arr[], int n) {
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

int main() {
    int arr[100], n, item, index;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Enter the element to search: ");
    scanf("%d", &item);

    index = binarySearch(arr, n, item);

    if (index != -1)
        printf("Item found at index %d (position %d)\n", index, index + 1);
    else
        printf("Item not found.\n");

    return 0;
}
