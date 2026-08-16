#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number to print unit's place and ten's place \t");
    scanf("%d",&n);
    int unit_s =n%10;
    printf("The value of unit's place is: %d\n",unit_s);
    int quo =n/10;
    int ten_s= quo%10;
    printf("The value of ten's place is: %d",ten_s);
}