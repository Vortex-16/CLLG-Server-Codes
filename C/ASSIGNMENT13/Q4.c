#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

// Function to accept user input
void getInput(struct Person *p) {
    printf("Enter name: ");
    scanf("%s", p->name);
    printf("Enter age: ");
    scanf("%d", &p->age);
}

// Function to print structure members
void print(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main() {
    struct Person person;

    // Get user input
    getInput(&person);

    // Print structure members
    print(person);

    return 0;}
