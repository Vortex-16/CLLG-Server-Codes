#include <stdio.h>

int hanoi(int n, char source, char target, char auxiliary)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, target);
        return 0;
    }
    hanoi(n - 1, source, auxiliary, target);
    printf("Move disk %d from %c to %c\n", n, source, target);
    hanoi(n - 1, auxiliary, target, source);
}
void main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
}
// OUTPUT:
// Enter the number of disks: 3
// Move disk 1 from A to C
// Move disk 2 from A to B
// Move disk 1 from C to B
// Move disk 3 from A to C
// Move disk 1 from B to A
// Move disk 2 from B to C
// Move disk 1 from A to C