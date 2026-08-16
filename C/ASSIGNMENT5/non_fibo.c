#include<stdio.h>
void main()
{
     int range,a,b,c,d,fibo;
    a=0;
    b=1;
    c=0;
    printf("Enter the last value of the non-fibo series:");
    scanf("%d",&range);
    while(c<range)
    {
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        for(fibo=c+1;fibo<d;fibo++)
        {
            if(fibo<range)
                printf("%d ",fibo);
            else
                break;
        }
    }
}
