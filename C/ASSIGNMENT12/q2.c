#include <stdio.h>
#include <math.h>

// Define a union to hold either int or float for exponent
union Exponent {
    int i;
    float f;
};

// Define a structure to hold the number and exponent type
struct PowerData {
    float x;
    char exponent_type; // 'i' for integer, 'f' for float
    union Exponent n;
};

float calculatePower(struct PowerData data) {
    if (data.exponent_type == 'i') {
        return pow(data.x, data.n.i);
    } else {
        return pow(data.x, data.n.f);
    }
}

int main() {
    struct PowerData data;
    
    printf("Enter the base value (x): ");
    scanf("%f", &data.x);
    
    printf("Enter exponent type (i for integer, f for float): ");
    while (getchar() != '\n'); // Clear input buffer
    scanf("%c", &data.exponent_type);
    
    if (data.exponent_type == 'i') {
        printf("Enter integer exponent (n): ");
        scanf("%d", &data.n.i);
    } else if (data.exponent_type == 'f') {
        printf("Enter floating point exponent (n): ");
        scanf("%f", &data.n.f);
    } else {
        printf("Invalid exponent type!\n");
        return 1;
    }
    
    float y = calculatePower(data);
    printf("Result: y = %.4f\n", y);
    
    return 0;
}