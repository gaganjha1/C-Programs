#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for Student
typedef struct {
    int id;
    char name[50];
    int age;
    float grade;
} Student;

// Function prototypes
void addStudent(Student **students, int *size);
void displayStudents(Student *students, int size);
void deleteStudent(Student **students, int *size);
void saveToFile(Student *students, int size);
void loadFromFile(Student **students, int *size);
void sortStudentsByGrade(Student *students, int size);
void searchStudentById(Student *students, int size);
void freeMemory(Student *students);

int main() {
    Student *students = NULL;
    int size = 0;
    int choice;

    // Load existing students from file if available
    loadFromFile(&students, &size);

    while(1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Delete Student\n");
        printf("4. Save to File\n");
        printf("5. Load from File\n");
        printf("6. Sort Students by Grade\n");
        printf("7. Search Student by ID\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addStudent(&students, &size);
                break;
            case 2:
                displayStudents(students, size);
                break;
            case 3:
                deleteStudent(&students, &size);
                break;
            case 4:
                saveToFile(students, size);
                break;
            case 5:
                loadFromFile(&students, &size);
                break;
            case 6:
                sortStudentsByGrade(students, size);
                break;
            case 7:
                searchStudentById(students, size);
                break;
            case 8:
                saveToFile(students, size);
                freeMemory(students);
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

// Function to add a student to the list
void addStudent(Student **students, int *size) {
    *students = realloc(*students, (*size + 1) * sizeof(Student));

    if (*students == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter Student ID: ");
    scanf("%d", &(*students)[*size].id);
    printf("Enter Student Name: ");
    getchar();  // to consume the newline character left by scanf
    fgets((*students)[*size].name, 50, stdin);
    (*students)[*size].name[strcspn((*students)[*size].name, "\n")] = '\0'; // remove newline
    printf("Enter Student Age: ");
    scanf("%d", &(*students)[*size].age);
    printf("Enter Student Grade: ");
    scanf("%f", &(*students)[*size].grade);

    (*size)++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(Student *students, int size) {
    if (size == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nList of Students:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Age: %d, Grade: %.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
    }
}

// Function to delete a student by ID
void deleteStudent(Student **students, int *size) {
    int id, index = -1;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);

    // Find the student by ID
    for (int i = 0; i < *size; i++) {
        if ((*students)[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student with ID %d not found!\n", id);
        return;
    }

    // Shift elements to delete the student
    for (int i = index; i < *size - 1; i++) {
        (*students)[i] = (*students)[i + 1];
    }

    *students = realloc(*students, (*size - 1) * sizeof(Student));
    (*size)--;
    printf("Student with ID %d deleted successfully!\n", id);
}

// Function to save student records to a file
void saveToFile(Student *students, int size) {
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for saving.\n");
        return;
    }

    fwrite(&size, sizeof(int), 1, file);
    fwrite(students, sizeof(Student), size, file);

    fclose(file);
    printf("Student records saved to file.\n");
}

// Function to load student records from a file
void loadFromFile(Student **students, int *size) {
    FILE *file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("No previous records found.\n");
        return;
    }

    fread(size, sizeof(int), 1, file);
    *students = realloc(*students, (*size) * sizeof(Student));

    fread(*students, sizeof(Student), *size, file);

    fclose(file);
    printf("Student records loaded from file.\n");
}

// Function to sort students by grade (ascending)
void sortStudentsByGrade(Student *students, int size) {
    if (size == 0) {
        printf("No students to sort.\n");
        return;
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (students[i].grade > students[j].grade) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Students sorted by grade.\n");
}

// Function to search for a student by ID
void searchStudentById(Student *students, int size) {
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            printf("Student found: ID: %d, Name: %s, Age: %d, Grade: %.2f\n", students[i].id, students[i].name, students[i].age, students[i].grade);
            return;
        }
    }

    printf("Student with ID %d not found.\n", id);
}

// Function to free dynamically allocated memory
void freeMemory(Student *students) {
    free(students);
    printf("Memory freed.\n");
}
