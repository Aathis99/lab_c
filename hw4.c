#include <stdio.h>

int main() {
    int choice;
    int num1, num2;

    do {
        printf("Choose your option:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the first Integer: ");
            scanf("%d", &num1);
            printf("Enter the second Integer: ");
            scanf("%d", &num2);
            printf("The Addition of %d and %d is: %d\n", num1, num2, num1 + num2);
        } else if (choice == 2) {
            printf("Enter the first Integer: ");
            scanf("%d", &num1);
            printf("Enter the second Integer: ");
            scanf("%d", &num2);
            printf("The Subtraction of %d and %d is: %d\n", num1, num2, num1 - num2);
        } else if (choice == 3) {
            printf("Enter the first Integer: ");
            scanf("%d", &num1);
            printf("Enter the second Integer: ");
            scanf("%d", &num2);
            printf("The Multiplication of %d and %d is: %d\n", num1, num2, num1 * num2);
        } else if (choice == 4) {
            printf("Enter the first Integer: ");
            scanf("%d", &num1);
            printf("Enter the second Integer: ");
            scanf("%d", &num2);

            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("The Division of %d by %d is: %.2lf\n", num1, num2, (double)num1 / num2);
            }
        } else if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
        } else {
            printf("Invalid option. Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}
