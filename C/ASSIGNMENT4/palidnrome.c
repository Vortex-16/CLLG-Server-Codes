#include<stdio.h>
void main()
{
    int n,digit,reversed=0;
    printf("Enter the number to cheeck weather it's a pallindrome or not!!  ");
    scanf("%d",&n);
    int ori=n;
    while(n>0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit; 
        n /= 10;
    }
    if(ori==reversed)
    printf("The given numbefr is palindrome");
    else
    printf("It is not a palindrome number:");
}