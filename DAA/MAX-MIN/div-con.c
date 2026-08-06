#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>

struct MinMax {
    int min;
    int max;
};

struct MinMax findMinMax(int arr[], int low, int high) {
    struct MinMax result, left, right;
    int mid;
    if (low == high) {
        result.min = result.max = arr[low];
        return result;
    }

    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            result.max = arr[low];
            result.min = arr[high];
        } else {
            result.max = arr[high];
            result.min = arr[low];
        }
        return result;
    }

    mid = (low + high) / 2;

    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    result.max = (left.max > right.max) ? left.max : right.max;
    result.min = (left.min < right.min) ? left.min : right.min;

    return result;
}

int main() {
    int n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(0));

    if (n > 10) {
        printf("Generating random elements:\n");
        for (i = 0; i < n; i++) {
            arr[i] = rand() % 1000;
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Start time
    clock_t start = clock();

    struct MinMax result = findMinMax(arr, 0, n - 1);
    clock_t end = clock();

    double cpu_time = (double)(end - start) / CLOCKS_PER_SEC;

    // Memory usage
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);

    printf("\nMaximum = %d\n", result.max);
    printf("Minimum = %d\n", result.min);

    printf("CPU Time = %f seconds\n", cpu_time);
    printf("Memory Usage = %ld KB\n", usage.ru_maxrss);

    return 0;
}
