#include <stdio.h>
#include <stdlib.h>
#define MAX 5   // maximum size of stack

int stack[MAX];
int top = -1;

// Push element
void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", data);
        return;
    }
    stack[++top] = data;
    printf("Pushed %d onto stack.\n", data);
}

// Pop element
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
        return;
    }
    printf("Popped %d from stack.\n", stack[top--]);
}


// Display stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top -> bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Front element = %d\n", stack[top]);
    }
}
// Menu-driven program
int main() {
    int choice, data;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
	case 3:
		peek();
		break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
