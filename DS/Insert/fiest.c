#include <stdio.h>

void first(int n,int item, int a[]){
    for(int i=n;i>=0;i--){
        a[i]=a[i-1];
    }
    a[0]=item;
    n=n+1;

    printf("The updated array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int arr[10],n,item;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("The array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("Enter a number to insert at first position: \n");
    scanf("%d",&item);

    first(n,item,arr);
}