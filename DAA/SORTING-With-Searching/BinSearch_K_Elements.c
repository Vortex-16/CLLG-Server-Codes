#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h> 

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
    int n;
    printf("Enter No. Of Elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    srand(time(NULL)); // seed random generator

    if (n > 15) {
        printf("Array size > 15, generating random elements...\n");
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 1000; // random numbers between 0 and 999
        }
    } else {
        printf("Enter Elements: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Start CPU time
    clock_t start = clock();

    bubSort(arr, n);

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
