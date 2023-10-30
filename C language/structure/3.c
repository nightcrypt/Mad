#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee(FILE *file) {
    struct Employee newEmployee;
    
    printf("Enter employee ID: ");
    scanf("%d", &newEmployee.id);
    
    printf("Enter employee name: ");
    scanf("%s", newEmployee.name);
    
    printf("Enter employee salary: ");
    scanf("%f", &newEmployee.salary);
    
    fwrite(&newEmployee, sizeof(struct Employee), 1, file);
    printf("Employee added successfully.\n");
}

void displayEmployees(FILE *file) {
    struct Employee employee;
    printf("Employee list:\n");
    
    while (fread(&employee, sizeof(struct Employee), 1, file) == 1) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employee.id, employee.name, employee.salary);
    }
}

int main() {
    FILE *file;
    int choice;

    file = fopen("new1.txt", "ab+");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(file);
                break;
            case 2:
                displayEmployees(file);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);

    fclose(file);
    return 0;
}

