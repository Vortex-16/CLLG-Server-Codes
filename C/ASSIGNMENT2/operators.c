#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int x = 5, y = 3;
    int p = 1, q = 0;

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n\n", a != b);

    // Compound Assignment Operators
    printf("Compound Assignment Operators:\n");
    int c = 10, d = 5;
    c += d;  printf("c += d : %d\n", c);
    c -= d;  printf("c -= d : %d\n", c);
    c *= d;  printf("c *= d : %d\n", c);
    c /= d;  printf("c /= d : %d\n\n", c);

    // Logical Operators
    printf("Logical Operators:\n");
    printf("p && q : %d\n", p && q);
    printf("p || q : %d\n", p || q);
    printf("!p : %d\n", !p);
    printf("!q : %d\n\n", !q);

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("x & y : %d\n", x & y);
    printf("x | y : %d\n", x | y);
    printf("x ^ y : %d\n", x ^ y);
    printf("~x : %d\n", ~x);
    printf("x << 1 : %d\n", x << 1);
    printf("x >> 1 : %d\n", x >> 1);

    return 0;
}
