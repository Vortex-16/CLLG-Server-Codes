#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void coinDenomination(int coins[], int n, int amount) {
    int count = 0;
    printf("Coins used: ");
    for (int i = n - 1; i >= 0; i--) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            printf("%d ", coins[i]);
            count++;
        }
    }

    printf("\nTotal coins used = %d\n", count);
    if (amount != 0) {
        printf("Remaining amount cannot be formed.\n");
    }
}

int main() {
    int n, amount;
    printf("Enter number of coins: ");
    scanf("%d", &n);
    int coins[n];
    printf("Enter coin denominations: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }
    qsort(coins, n, sizeof(int), compare);
    printf("Sorted coin denominations: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", coins[i]);
    }
    printf("\n");
    printf("Enter amount: ");
    scanf("%d", &amount);

    // Start time
    clock_t start = clock();
    coinDenomination(coins, n, amount);
    clock_t end = clock();

    // CPU & Memory usage
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    double cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nExecution Time: %f seconds\n", cpu_time);
    printf("Memory Usage: %ld KB\n", usage.ru_maxrss);

    return 0;
}
