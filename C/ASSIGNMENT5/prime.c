#include <stdio.h>

void main()
{
    int range, c;
    printf("Enter the range: ");
    scanf("%d", &range);
    printf("Prime numbers up to %d are: ", range);
    for (int i = 2; i <= range; i++) 
    {
        c = 0;  
        for (int j = 1; j <= i; j++)  
        {
            if (i % j == 0)
                c++;  
        }
        if (c == 2) 
            printf("%d ", i);
    }
    printf("\n");
}
