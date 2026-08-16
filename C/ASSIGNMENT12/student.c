#include <stdio.h>
#include <string.h>

// Define the student structure
struct Student {
    int roll;
    char name[50];
    char address[100];
};

// Function to sort students by roll number
void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (students[j].roll > students[j+1].roll) {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Consume the newline character left by scanf
    while (getchar() != '\n');
    
    struct Student students[n];
    
    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        while (getchar() != '\n'); // Clear input buffer
        
        printf("Name: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline
        
        printf("Address: ");
        fgets(students[i].address, 100, stdin);
        students[i].address[strcspn(students[i].address, "\n")] = '\0'; // Remove newline
    }
    
    // Sort students by roll number
    sortStudents(students, n);
    
    // Display sorted student details
    printf("\nSorted Student Details (by Roll Number):\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
    }
    
    return 0;
}