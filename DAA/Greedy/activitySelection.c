#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

struct Activity {
    int start;
    int finish;
};

void sortActivities(struct Activity arr[], int n) {
    int i, j;
    struct Activity temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].finish > arr[j + 1].finish) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void activitySelection(struct Activity arr[], int n) {
    printf("\nSelected Activities:\n");
    int i = 0;
    printf("Activity -> Start: %d Finish: %d\n",
           arr[i].start, arr[i].finish);
    for (int j = 1; j < n; j++) {
        if (arr[j].start >= arr[i].finish) {
            printf("Activity -> Start: %d Finish: %d\n",arr[j].start, arr[j].finish);
            i = j;
        }
    }
}

int main() {
    int n;
    printf("Enter number of activities: ");
    scanf("%d", &n);
    struct Activity arr[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter start time of activity %d: ", i + 1);
        scanf("%d", &arr[i].start);
        printf("Enter finish time of activity %d: ", i + 1);
        scanf("%d", &arr[i].finish);
    }
    sortActivities(arr, n);
    activitySelection(arr, n);
    return 0;
}
