#include <stdio.h>

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    double cost1 = 0, cost2 = 0, cost3 = 0;
    int remaining = units;

    // First 100 units
    if (remaining > 100) {
        cost1 = 100 * 1.50;
        remaining -= 100;
    } else {
        cost1 = remaining * 1.50;
        remaining = 0;
    }

    // Next 100 units
    if (remaining > 100) {
        cost2 = 100 * 2.50;
        remaining -= 100;
    } else {
        cost2 = remaining * 2.50;
        remaining = 0;
    }

    // Above 200 units
    if (remaining > 0) {
        cost3 = remaining * 4.00;
    }

    double total = cost1 + cost2 + cost3;
    printf("first 100 @ 1.50 = %.2f\n", cost1);
    printf("next  100 @ 2.50 = %.2f\n", cost2);
    printf("above     @ 4.00 = %.2f\n", cost3);
    printf("total            = %.2f\n", total);

    return 0;
}
