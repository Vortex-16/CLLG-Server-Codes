#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c;
    printf("Enter the first side of a triangle (a): ");
    scanf("%d", &a);   
    printf("Enter the second side of a triangle (b): ");
    scanf("%d", &b);    
    printf("Enter the third side of a triangle (c): ");
    scanf("%d", &c);
    int peri = a + b + c;
    float s = peri / 2.0; 
    printf("Perimeter of the triangle is: %d\n", peri);
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is: %f\n", area);
}
