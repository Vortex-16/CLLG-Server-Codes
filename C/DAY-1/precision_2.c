#include<stdio.h>
int main()
{
    float f=7.9;
    double d=777.898989;
    printf("formatted output %f %.f %.*lf\n",f,2,f,d,3,d);
}