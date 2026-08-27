#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    
    printf("====================================\n");
    printf("      Simple Arithmetic Calculator   \n");
    printf("====================================\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to clear the input buffer

    // Prompt user for the two numeric values
    printf("Enter two numbers separated by a space: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid numeric input.\n");
        return 1; // Exit program due to bad input
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Critical check to avoid application crash from division by zero
            if (num2 == 0) {
                printf("\nError: Division by zero is mathematically undefined.\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            // Handles any character that is not an expected operator
            printf("\nError: '%c' is not a valid operator.\n", operator);
            break;
    }

    printf("====================================\n");
    return 0;
}
