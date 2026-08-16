#include <stdio.h>
#include <math.h>
void main()
{
  int a, b, c;
  double d, root1, root2, real, imag;
  printf("Enter values of a, b, and c to get roots of the quadratic equation: ");
  scanf("%d%d%d", &a, &b, &c);
  d = (b * b) - (4 * a * c);
  if (d > 0)
  {
    root1 = (-b + sqrt(d)) / (2.0 * a);
    root2 = (-b - sqrt(d)) / (2.0 * a);
    printf("Root 1 = %.2f\n", root1);
    printf("Root 2 = %.2f\n", root2);
    printf("Roots are real and different\n");
  }
  else if (d == 0)
  {
    root1 = -b / (2.0 * a);
    printf("Root = %.2f\n", root1);
    printf("Roots are real and equal\n");
  }
  else
  {
    real = -b / (2.0 * a);
    imag = sqrt(-d) / (2.0 * a);
    printf("Root 1 = %.2f + %.2fi\n", real, imag);
    printf("Root 2 = %.2f - %.2fi\n", real, imag);
    printf("Roots are imaginary\n");
  }
}