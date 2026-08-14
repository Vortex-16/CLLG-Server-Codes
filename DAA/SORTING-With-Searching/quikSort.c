#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];  
    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[low], &arr[i - 1]);  
    return i - 1;                  
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int n;
    printf("Enter No. Of Elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    srand(time(NULL));

    if (n > 15) {
        printf("Array size > 15, generating random elements...\n");
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 1000;
        }
    } else {
        printf("Enter Elements: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Start CPU time
    clock_t start = clock();

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int item;
    printf("Enter the element you want to find: ");
    scanf("%d", &item);

    int result = binSearch(arr, 0, n - 1, item);

    clock_t end = clock();
    double cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);

    if (result != -1)
        printf("Element %d found at index %d\n", item, result);
    else
        printf("Element %d not found\n", item);

    printf("CPU Time Used: %f seconds\n", cpu_time);
    printf("Memory Usage (MAX Resident Set Size): %ld KB\n", usage.ru_maxrss);

    free(arr);
    return 0;
}
