#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a; 
    *a = *b;        
    *b = temp;      
}

void main()
{
    int a ,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    printf("Before swap: a=%d,  b=%d\n", a, b);
    
    // Passing the addresses to the swap function
    swap(p1, p2); 
    
    printf("After swap: a=%d,  b=%d\n", a, b);

    // printf("Address of a: p1=%p\n", p1); 
    // printf("Address of b: p2=%p\n", p2);  
}

// OUTPUT:
//Enter two numbers: 5 10;
//Before swap: a=5, b=10;
//After swap: a=10, b=5;
//Address of a: p1=0x7ffeedc3b8b;
//Address of b: p2=0x7ffeedc3b8c;