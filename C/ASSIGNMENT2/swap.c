#include<stdio.h>
void main()
{
    //using temporary veriabel::
    int a,b,temp=0;
    printf("Enter the value of a: \t");
    scanf("%d",&a);
    printf("Enter the value of b: \t");
    scanf("%d",&b);
    printf("The values before swaping are: a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The values after swaping are: a=%d b=%d\n",a,b);

    //without third variable::
    int sum=a+b;
    a=sum-a;
    b=sum-b;
    printf("The values after swaping are: a=%d b=%d",a,b);
}