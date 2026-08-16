#include<stdio.h>
void main()
{
    int a,b;
    printf("Eneter the the first number a: ");
    scanf("%d",&a);
    printf("Eneter the the second number b: ");
    scanf("%d",&b);
    if(a<0 || b<0)
    {
        if(a<0)
        a=a*-1;
        else
        b=b*-1;
    }
    else
    {
        a=a;
        b=b;
    }
    if(a>b)
    printf("Magnitude of a is greater");
    else
    printf("Magnitude of b is greater");
}