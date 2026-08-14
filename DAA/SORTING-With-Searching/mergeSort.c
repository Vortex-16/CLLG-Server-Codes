#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h> 

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
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

    mergeSort(arr, 0, n - 1);

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
