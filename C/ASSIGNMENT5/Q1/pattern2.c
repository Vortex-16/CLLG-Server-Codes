#include<stdio.h>
void main() 
{
    int i, j, space = 3; 

    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= space + (2 * i - 1); j++) 
        { 
            if(j <= space) 
                printf(" "); 
            else 
                printf("*"); 
        }
        space--;
        printf("\n");
    }
}
