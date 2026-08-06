#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}
struct Node* findMin(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}
struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) {
        return root;
    }
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main() {
    struct Node* root = NULL;
    // root = insert(root, 50);
    // insert(root, 30);
    // insert(root, 20);
    // insert(root, 40);
    // insert(root, 70);
    // insert(root, 60);
    // insert(root, 80);

    // printf("Inorder traversal of the given tree: ");
    // inorder(root);
    // printf("\n");

    // printf("Delete 20\n");
    // root = deleteNode(root, 20);
    // printf("Inorder traversal after deletion: ");
    // inorder(root);
    // printf("\n");

    // printf("Delete 30\n");
    // root = deleteNode(root, 30);
    // printf("Inorder traversal after deletion: ");
    // inorder(root);
    // printf("\n");

    // printf("Delete 50\n");
    // root = deleteNode(root, 50);
    // printf("Inorder traversal after deletion: ");
    // inorder(root);
    // printf("\n");

    int n, data;
    printf("Enter number of nodes to insert: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        root = insert(root, data);
    }
    printf("Inorder traversal of the tree: ");
    inorder(root);
    printf("\n");
    printf("Enter data of node to delete: ");
    scanf("%d", &data);
    root = deleteNode(root, data);
    printf("Inorder traversal after deletion: ");
    inorder(root);
    printf("\n");
    printf("Enter data of another node to delete: ");
    scanf("%d", &data);
    root = deleteNode(root, data);
    printf("Inorder traversal after deletion: ");
    inorder(root);
    printf("\n");
    printf("Enter data to insert a new node: ");
    scanf("%d", &data);
    root = insert(root, data);
    printf("Inorder traversal after insertion: ");
    inorder(root);
    printf("\n");
    

    return 0;
}
