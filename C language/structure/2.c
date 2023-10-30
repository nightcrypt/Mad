#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee employees[MAX_EMPLOYEES];
int numEmployees = 0;

void addEmployee(int id, const char* name, float salary) {
    if (numEmployees < MAX_EMPLOYEES) {
        employees[numEmployees].id = id;
        strcpy(employees[numEmployees].name, name);
        employees[numEmployees].salary = salary;
        numEmployees++;
        printf("Employee added successfully.\n");
    } else {
        printf("Cannot add more employees. The limit has been reached.\n");
    }
}

void displayEmployees() {
    printf("Employee list:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

int main() {
    int choice, id;
    char name[50];
    float salary;

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter employee ID: ");
                scanf("%d", &id);
                printf("Enter employee name: ");
                scanf("%s", name);
                printf("Enter employee salary: ");
                scanf("%f", &salary);
                addEmployee(id, name, salary);
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}

