//Write a program with structure to store students' record (viz. roll, name, address, etc.).
//The prpgram shoul store the records in a file student.dat. When the record of a student is reqired, the roll number should provided and the coreesponding record should be displayed. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define MAX_STUDENTS 100
struct Student {
    int roll;
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
};
void addStudent(FILE *file) {
    struct Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    getchar(); // Clear newline character from input buffer
    printf("Enter name: ");
    fgets(student.name, MAX_NAME_LENGTH, stdin);
    student.name[strcspn(student.name, "\n")] = 0; // Remove newline character
    printf("Enter address: ");
    fgets(student.address, MAX_ADDRESS_LENGTH, stdin);
    student.address[strcspn(student.address, "\n")] = 0; // Remove newline character

    fwrite(&student, sizeof(struct Student), 1, file);
}
void displayStudent(struct Student student) {
    printf("Roll Number: %d\n", student.roll);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
}
void searchStudent(FILE *file, int roll) {
    struct Student student;
    rewind(file); // Move to the beginning of the file
    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.roll == roll) {
            displayStudent(student);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll);
}
int main() {
    FILE *file = fopen("student.dat", "ab+");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(file);
                break;
            case 2: {
                int roll;
                printf("Enter roll number to search: ");
                scanf("%d", &roll);
                searchStudent(file, roll);
                break;
            }
            case 3:
                fclose(file);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    fclose(file);
    return 0;
}

