#include <stdio.h>

// Function to draw a horizontal line of given length
void drawLine(int length) {
    for (int i = 0; i < length; i++) {
        printf("-"); // You can also use '*' or '='
    }
    printf("\n"); // Move to next line after drawing
}

int main() {
    printf("Start of Line:\n");
    drawLine(20); // Draws a line of 20 characters

    printf("Another Line Here:\n");
    drawLine(10); // Draws a line of 10 characters

    // return 0;
}