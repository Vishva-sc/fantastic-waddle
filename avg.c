#include <stdio.h>

int main() {
    float a, b, c;
    float avg;

    printf("Enter value of a: ");
    scanf("%f", &a); // %f for float
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);
    avg = (a + b + c) / 3;
    printf("Average of %.2f, %.2f and %.2f is: %.2f\n", a, b, c, avg); // %.2f prints 2 decimal places
    return 0;
}