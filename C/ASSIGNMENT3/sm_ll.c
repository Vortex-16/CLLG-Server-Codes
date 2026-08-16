#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number a:  ");
    scanf("%d",&a);
    printf("Enter the second numer b:  ");
    scanf("%d",&b);
    printf("Enter the third number c:  ");
    scanf("%d",&c);
    if (a > b) 
    {  
        if (a > c)  
            printf("The largest number is: %d\n", a);
        else
            printf("The largest number is: %d\n", c);
    } 
    else 
    {  
        if (b > c)  
            printf("The largest number is: %d\n", b);
        else
            printf("The largest number is: %d\n", c);
    }
    if(a<b)
    {
        if(a<c)
        {
            printf("The smallest number is: %d \n",a);
        }
        else
        printf("The smallest number is: %d \n",c);
    }
    else
    {
        if(b<c)
        {
            printf("The smallest number is: %d \n",b);
        }
        else
        printf("The smallest number is: %d \n",c);
    }


}