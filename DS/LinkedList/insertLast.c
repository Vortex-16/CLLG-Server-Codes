#include <stdio.h>
#include <stdlib.h>
struct div {
    int data;
    struct div* next;
};

struct div* head= NULL;

struct div* creatediv(int val) {
    struct div* new = (struct div*)malloc(sizeof(struct div));
    new->data = val;
    new->next = NULL;
    return new;
}

void insertLast(int val){
    struct div* new = creatediv(val);
    
    if (head == NULL) {
        head = new;
        return;
    }
    
    struct div* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new;
}

void traversalList(){
    struct div* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(){
	int value;
printf("Enter The Value You Want To insert !!\n");
    for(int i=0;i<5;i++)
    {
	printf("Enter Value: ");
	scanf("%d",&value);
        insertLast(value);
    }
    traversalList();
    return 0;
}

 
