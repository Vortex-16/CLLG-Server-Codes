#include <stdio.h>

void any(int n,int item, int a[],int loc){

    for(int i=n;i<loc;i--){
        a[i]=a[i-1];
    }
    a[loc]=item;

    printf("The updated array is: \n");
    for(int i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int arr[10],n,item,pos;
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
    printf("Enter a number to insert at any position: \n");
    scanf("%d",&item);
    printf("Enter the position after which you want to insert: \n");
    scanf("%d",&pos);

    any(n,item,arr,pos);
}