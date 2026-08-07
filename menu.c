#include <stdio.h>
#include <stdlib.h>  // for exit()

int main() {
    int choice, num1, num2;
    float result;

    while (1) {
        printf("\n\n*** MENU ***\n");
        printf("1. Addition of 2 numbers\n");
        printf("2. Subtraction of 2 numbers\n");
        printf("3. Multiplication of 2 numbers\n");
        printf("4. Division of 2 numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                result = num1 + num2;
                printf("Sum = %.2f\n", result);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                result = num1 - num2;
                printf("Difference = %.2f\n", result);
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                result = num1 * num2;
                printf("Product = %.2f\n", result);
                break;

            case 4:
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                if (num2 == 0) {
                    printf("Division by zero is not allowed.\n");
                } else {
                    result = (float)num1 / num2;
                    printf("Quotient = %.2f\n", result);
                }
                break;

            case 5:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
