#include <stdio.h>

void displayMenu() {
    printf("\nBank Menu:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
}

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    do {
        displayMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the amount to deposit: ");
                scanf("%lf", &amount);
                if (amount < 0) {
                    printf("Invalid amount. Deposit amount must be positive.\n");
                } else {
                    balance += amount;
                    printf("Deposit of $%.2lf successful.\n", amount);
                }
                break;
            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount < 0) {
                    printf("Invalid amount. Withdrawal amount must be positive.\n");
                } else if (amount > balance) {
                    printf("Insufficient funds.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal of $%.2lf successful.\n", amount);
                }
                break;
            case 3:
                printf("Your current balance is $%.2lf.\n", balance);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
