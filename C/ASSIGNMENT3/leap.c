#include<stdio.h>
void main()
{
    int yr;
    printf("Enter the year:  ");
    scanf("%d",&yr);
    if((yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0))
    printf("The given year is leap year: %d\n",yr);
    else
    printf("The given year is  not a leap year: %d\n",yr);
}
