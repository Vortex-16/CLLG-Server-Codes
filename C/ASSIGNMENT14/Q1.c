#include <stdio.h>

int main() {
    FILE *fptr;
    int n, i, num;

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter how many integers you want to store: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(fptr, " %d ", num); 
    }

    fclose(fptr); 
    printf("Integers stored successfully in input.txt\n");

    return 0;
}

//OUTPUT:
// Enter how many integers you want to store: 5
// Enter 5 integers:
// 7 0 8 4 5
// Integers stored successfully in input.txt