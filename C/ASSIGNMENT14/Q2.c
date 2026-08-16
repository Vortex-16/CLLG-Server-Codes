#include <stdio.h>

#define MAX_SIZE 1000  // Max number of integers

// Bubble sort
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
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Cannot open input.txt\n");
        return 1;
    }

    int arr[MAX_SIZE];
    int n = 0;

    // Read numbers
    while (fscanf(fin, "%d", &arr[n]) == 1 && n < MAX_SIZE) {
        n++;
    }
    fclose(fin);

    // Sort
    sort(arr, n);

    // Write output
    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Cannot open output.txt\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fout, "%d\n", arr[i]);
    }
    fclose(fout);

    printf("Sorting complete. Check output.txt\n");
    return 0;
}
