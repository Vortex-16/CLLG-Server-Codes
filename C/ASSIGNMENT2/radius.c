#include<stdio.h>
#include<math.h>
void main()
{
    int r;
    printf("Enter the radius of the circle: \t");
    scanf("%d",&r);
    float area= 3.14*(pow(r,2));
    printf("Area of the circle is: %f\n", area);
}