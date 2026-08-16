#include<stdio.h>
void main()
{
    int mark;
    printf("Enter the mark scored by the student:  ");
    scanf("%d",&mark);
    if(mark>=40 && mark<50)
    printf("The grade of the student is: D");
    else if(mark>=50 && mark<60)
    printf("The grade of the student is: C");
    else if(mark>=60 && mark<70)
    printf("The grade of the student is: B");
    else if(mark>=70 && mark<80)
    printf("The grade of the student is: A");
    else if(mark>=80 && mark<90)
    printf("The grade of the student is: E");
    else if(mark>=90 && mark<=100)
    printf("The grade of the student is: O");
    else if (mark<40)
    {
        printf("The Student Has Failed The Examination: F");
    }
    else
    printf("Enter valid marks");
    
}