#include <stdio.h>
void main() {
    int a, d, n;

    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Arithmetic Progression: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a + i * d);
    }
    //printf("\n");
}
