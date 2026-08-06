#include <stdio.h>

	void first(int n, int a[]){
    		for(int i=0;i<n;i++){
        	a[i]=a[i+1];
    	}
    	n=n-1;

    	printf("The updated array is: \n");
    	for(int i=0;i<n;i++){
        	printf("%d ", a[i]);
    		}
	}

	void last(int n, int a[])
	{
   		n=n-1;

    		printf("The updated array is: \n");
    		for(int i=0;i<n;i++)
		{
        		printf("%d ",a[i]);
    		}
	}

	void any(int n, int a[],int loc){
    		for(int i=loc;i<n-1;i++){
        		a[i]=a[i+1];
    		}
    		
    		printf("The updated array is: \n");
    		for(int i=0;i<n-1;i++){
        		printf("%d ",a[i]);
    		}
	}

int main(){
    int arr[10],n,pos,cse;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   

	printf("\n ----------------------- \n");
	printf("Perform any of them: \n");
    	printf("Enter 1 For: Deletion at first index.\n");
    	printf("Enter 2 For: Deletion at last index.\n");
    	printf("Enter 3 For: Deletion at any index.\n");
	printf("\n ----------------------- \n");
    	printf("Enter your choise: \n");
    	scanf("%d",&cse);

    	switch(cse){
        	case 1: { 
			    printf("Removing the first position(element): \n");
                    	    first(n,arr);
                    	    break;
                	}

        	case 2:{
			printf("Removing from last position: \n");
                	last(n,arr);
                	break;
               	       }

        	case 3: {
  		  	printf("Enter the postion at which you want delete: \n");
                  	scanf("%d",&pos);
                    
                  	any(n,arr,pos);
                  	break;
            		}
        	default: printf("Enter correct choice /n");
               
    		}
    
}