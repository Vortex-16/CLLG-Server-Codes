#include <stdio.h>
void main()
{
    char str[100], rev[100];
    int i, j, len = 0, isPalindrome = 1;
    printf("Enter a string: ");
    gets(str);
    
    // Calculate length of the string
    while (str[len] != '\0')
        len++;
    
    // Reverse the string
    for (i = len - 1, j = 0; i >= 0; i--, j++)
        rev[j] = str[i];
    rev[j] = '\0'; // Null-terminate the reversed string
    
    // Check if the original string is equal to the reversed string
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}