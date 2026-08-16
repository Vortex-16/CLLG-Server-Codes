#include <stdio.h>

int recursion(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*recursion(n-1);
    }
}
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, recursion(n));
}