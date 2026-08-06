#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>

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
    int max = arr[0], min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // End time
    clock_t end = clock();

    // CPU time
    double cpu_time = (double)(end - start) / CLOCKS_PER_SEC;

    // Memory usage
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);

    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d\n", min);

    printf("CPU Time = %f seconds\n", cpu_time);
    printf("Memory Usage = %ld KB\n", usage.ru_maxrss);

    return 0;
}
