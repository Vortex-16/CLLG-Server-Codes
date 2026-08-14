#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


void enqueue(int data) {
    if ((rear + 1) % MAX == front) {
        printf("Queue Overflow! Cannot enqueue %d\n", data);
        return;
    }
    if (front == -1) front = 0; 
    rear = (rear + 1) % MAX;
    queue[rear] = data;
    printf("Enqueued %d into queue.\n", data);
}


void dequeue() {
    if (front == -1) {
        printf("Queue Underflow! Nothing to dequeue.\n");
        return;
    }
    printf("Dequeued %d from queue.\n", queue[front]);
    if (front == rear) {
        front = rear = -1; 
    } else {
        front = (front + 1) % MAX;
    }
}


void peek() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Front element = %d\n", queue[front]);
    }
}

// Display
void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}


int main() {
    int choice, data;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
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
