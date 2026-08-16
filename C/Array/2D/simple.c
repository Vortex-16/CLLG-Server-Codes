#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the range size of array: \t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Here is the array:\n");
        for(i=0;i<n;i++)
        {
            printf("arr[%d]=%d\t",i,arr[i]);
        }
}