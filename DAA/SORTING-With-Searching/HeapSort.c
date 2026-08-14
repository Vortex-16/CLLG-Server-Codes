#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
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

    // Start time
    clock_t start = clock();

    heapSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // End time
    clock_t end = clock();
    double cpu_time = (double)(end - start) / CLOCKS_PER_SEC;

    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);

    printf("CPU Time Used: %f seconds\n", cpu_time);
    printf("Memory Usage: %ld KB\n", usage.ru_maxrss);

    free(arr);
    return 0;
}



