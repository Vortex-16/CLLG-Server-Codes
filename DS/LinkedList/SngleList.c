#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}
void insertAtFirst(int val) {
    struct Node* newNode = createNode(val);
    newNode->next = head;
    head = newNode;
}
void insertAtLast(int val) {
    struct Node* newNode = createNode(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
 	   temp = temp->next;
    temp->next = newNode;
}
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice, val, pos;
    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Last\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insertAtFirst(val);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &val);
                insertAtLast(val);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
