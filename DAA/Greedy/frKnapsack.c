#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <time.h>

typedef struct {
    int weight;
    int value;
} Item;

int cmp(const void *a, const void *b) {
    Item *i1 = (Item *)a;
    Item *i2 = (Item *)b;

    double r1 = (double)i1->value / i1->weight;
    double r2 = (double)i2->value / i2->weight;

    if (r2 > r1)
        return 1;
    else if (r2 < r1)
        return -1;
    else
        return 0;
}

double fractionalKnapsack(Item items[], int n, int capacity) {
    qsort(items, n, sizeof(Item), cmp);
    double totalValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            capacity -= items[i].weight;
            totalValue += items[i].value;
        }
        else {
            totalValue += ((double)items[i].value / items[i].weight) * capacity;
            break;
        }
    }

    return totalValue;
}

int main() {
    int n, capacity;
    printf("Enter number of items: ");
    scanf("%d", &n);
    Item *items = (Item *)malloc(n * sizeof(Item));
    printf("Enter weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);
    clock_t start = clock();
    double maxValue = fractionalKnapsack(items, n, capacity);
    clock_t end = clock();

    // Memory usage
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    printf("\nMaximum value in Knapsack = %.2f\n", maxValue);
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time: %f seconds\n", time_taken);
    printf("Memory Usage: %ld KB\n", usage.ru_maxrss);
    free(items);
    return 0;
}
