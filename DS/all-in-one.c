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

void last(int n,int item, int a[]){
    a[n]=item;
    n=n+1;

    printf("The updated array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void any(int n,int item, int a[],int loc){
    for(int i=n;i<loc;i--){
        a[i]=a[i-1];
    }
    a[n]=item;
    n=n+1;

    printf("The updated array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int arr[10],n,item,pos,cse;
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

	printf("\n ----------------------- \n");
	printf("Perform any of them: \n");
    printf("Enter 1 For: Inserrtion at first index.\n");
    printf("Enter 2 For: Inserrtion at last index.\n");
    printf("Enter 3 For: Inserrtion at any index.\n");
	printf("\n ----------------------- \n");

    printf("Enter your choise: \n");
fflush(stdout);
    scanf("%d",&cse);

    switch(cse){
        case 1: { printf("Enter a number to insert at first position: \n");
                    scanf("%d",&item);
                    first(n,item,arr);
                    break;
                }
        case 2:{printf("Enter a number to last at last position: \n");
                scanf("%d ",&item);
                last(n,item,arr);
                break;
                }
        case 3: {printf("Enter a number to insert at any position: \n");
                scanf("%d",&item);
    
                printf("Enter the position after which you want to insert: \n");
                scanf("%d",&pos);
                any(n,item,arr,pos);
                break;
            }
        default: printf("Enter correct choice /n");
               
    }
    
}