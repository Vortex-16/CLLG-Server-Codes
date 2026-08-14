#include <stdio.h>
#include <stdlib.h>

// --------- Linked List Node ----------
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;

// --------- Linked List Functions ----------
void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
}

void displayLinkedList() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// --------- Search Algorithms ----------
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// --------- Main Menu ----------
int main() {
    int choice;
    int arr1D[100], n1D = 0;
    int arr2D[10][10], r = 0, c = 0;

    while (1) {
        printf("\n========= MENU =========\n");
        printf("1. 1D Array Input & Display\n");
        printf("2. 2D Array Input & Display\n");
        printf("3. Insert into Linked List\n");
        printf("4. Display Linked List\n");
        printf("5. Linear Search (1D Array)\n");
        printf("6. Binary Search (1D Array - Sorted)\n");
        printf("0. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter size of 1D array: ");
                scanf("%d", &n1D);
                printf("Enter %d elements: ", n1D);
                for (int i = 0; i < n1D; i++) scanf("%d", &arr1D[i]);
                printf("1D Array: ");
                for (int i = 0; i < n1D; i++) printf("%d ", arr1D[i]);
                printf("\n");
                break;
            }

            case 2: {
                printf("Enter rows & cols: ");
                scanf("%d %d", &r, &c);
                printf("Enter elements:\n");
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                        scanf("%d", &arr2D[i][j]);
                printf("2D Array:\n");
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < c; j++) printf("%d ", arr2D[i][j]);
                    printf("\n");
                }
                break;
            }

            case 3: {
                int val;
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insertAtEnd(val);
                break;
            }

            case 4:
                displayLinkedList();
                break;

            case 5: {
                if (n1D == 0) {
                    printf("1D Array is empty.\n");
                    break;
                }
                int key;
                printf("Enter key to search: ");
                scanf("%d", &key);
                int pos = linearSearch(arr1D, n1D, key);
                if (pos == -1) printf("Element not found.\n");
                else printf("Element found at index %d\n", pos);
                break;
            }

            case 6: {
                if (n1D == 0) {
                    printf("1D Array is empty.\n");
                    break;
                }
                int key;
                printf("Enter key to search (Binary Search - array must be sorted): ");
                scanf("%d", &key);
                int pos = binarySearch(arr1D, n1D, key);
                if (pos == -1) printf("Element not found.\n");
                else printf("Element found at index %d\n", pos);
                break;
            }

            case 0:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice. Try again!\n");
        }
    }
    return 0;
}
