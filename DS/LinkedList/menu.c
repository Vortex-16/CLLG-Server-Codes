#include <stdio.h>
#include <stdlib.h>

struct div {
    int data;
    struct div* next;
};

struct div* head = NULL;

struct div* creatediv(int val) {
    struct div* newNode = (struct div*)malloc(sizeof(struct div));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insertFirst(int val) {
    struct div* newNode = creatediv(val);
    newNode->next = head;
    head = newNode;
}

void insertLast(int val) {
    struct div* newNode = creatediv(val);
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    struct div* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = newNode;
}

void insertAtPosition(int val, int position) {
    struct div* newNode = creatediv(val);
    
    if (position == 0) {
        insertFirst(val);
        return;
    }
    
    struct div* ptr = head;
    int count = 0;
    
    while (ptr != NULL && count < position - 1) {
        ptr = ptr->next;
        count++;
    }
    
    if (ptr == NULL) {
        printf("Position %d is beyond list length. Inserting at end.\n", position);
        insertLast(val);
        return;
    }
    
    newNode->next = ptr->next;
    ptr->next = newNode;
}

void traversalList() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    struct div* ptr = head;
    printf("Linked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    int value;
   
    printf("Enter 5 values to create initial list:\n");
    for(int i = 0; i < 5; i++) {
        printf("Enter Value %d: ", i+1);
        scanf("%d", &value);
        insertLast(value);
    }
    
    int choice;
    do {
        printf("\n------ Select Your Choice ------\n");
        printf("1. Traverse List\n");
        printf("2. Insert First\n");
        printf("3. Insert Last\n");
        printf("4. Insert at Position\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                traversalList();
                break;
                
            case 2:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                insertFirst(value);
                printf("Value inserted at beginning!\n");
		traversalList();
                break;
                
            case 3:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertLast(value);
                printf("Value inserted at end!\n");
		traversalList();
                break;
                
            case 4:
                printf("Enter value to insert at specific position: ");
                scanf("%d", &value);
                int pos;
                printf("Enter position (0 for beginning): ");
                scanf("%d", &pos);
                insertAtPosition(value, pos);
                printf("Value inserted at position %d!\n", pos);
		traversalList();
                break;
                
            case 5:
                printf("Exiting...\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);
    
    return 0;
}
