#include <stdio.h>

void search(int n,int item, int a[],int loc){
    int  flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==item){
            flag =i;
        }
    }

    printf("The item is found at: %d \n",flag);
}

int main(){
    int arr[10],n,item,pos=0;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("Enter a number to search: \n");
    scanf("%d",&item);
    

    search(n,item,arr,pos);
return 0;
}