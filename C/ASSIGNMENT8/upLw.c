#include <stdio.h>

char toUpper(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch-32;
    }
}
char toLower(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        return ch+32;
    }
}
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Uppercase: %c\n", toUpper(ch));
    printf("Lowercase: %c\n", toLower(ch));
}