#include <stdio.h>
void main()
 {
    printf("Enter two values \n");
    int x,y;
    scanf("%d %d", &x, &y);
    float quot, rem;
    int sum, diff, prod;
    sum = x + y;
    printf("sum= %d\n", sum);
    if(x<y)
    {
        diff = y - x;
    }
    else
    {
        diff=x-y;
    }
    printf("diff= %d\n", diff);
    prod = x * y;
    printf("prod= %d\n", prod);
    quot = (float)x / y;
    printf("quot= %f\n", quot);
    rem = (float)y / x;
    printf("rem= %f\n", rem);
}
