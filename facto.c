#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
        return 0;
    }

    long long factorial = 1;
    int i = 1; // Initialize loop counter

    while (i <= n) {
        factorial *= i; 
        i++; 
    }

    // Print only the final result outside the loop
    printf("Factorial of %d is %lld\n", n, factorial);

    return 0;
}
