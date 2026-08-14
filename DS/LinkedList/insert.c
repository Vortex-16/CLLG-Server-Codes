#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head= NULL;

struct node* createNode(int val) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = val;
    new->next = NULL;
    return new;
}

void insertFirst(int val) {
    struct node* new = createNode(val);
    new->next = head;
    head = new;
}

void traversalList(){
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d <- ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(){
	int value;
    for(int i=0;i<5;i++)
    {
	printf("Enter Value: ");
	scanf("%d",&value);
        insertFirst(value);
    }
    traversalList();
    return 0;
}

 