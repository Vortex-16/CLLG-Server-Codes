#include <stdio.h>
void printBackward(char *text)
{
    if (*text == '\0') {
        return; 
    }
    printBackward(text + 1); 
    putchar(*text); 
}

int main()
{
    char text[100];
    printf("Enter a text: ");
    scanf("%[^\n]", text); 
    printf("Text in reverse: ");
    printBackward(text);
    return 0;
}
