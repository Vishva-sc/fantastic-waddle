#include <stdio.h>
#include <math.h>

#define MAX 10

int main() {

    int n;
    double a[MAX][MAX + 1];
    double x[MAX];
    double m, sum;

    // Input size
    printf("Enter number of equations (n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid size.\n");
        return 1;
    }

    // Input augmented matrix
    printf("Enter augmented matrix row by row (%d elements each):\n", n + 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            scanf("%lf", &a[i][j]);
        }
    }
    printf("\nAugmented Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%lf ", a[i][j]);
        }
        printf("\n");
    }

    // ==========================================
    // PHASE 1: UPPER TRIANGULARIZATION
    // ==========================================

    for (int i = 0; i < n - 1; i++) {

        // Check pivot
        if (fabs(a[i][i]) < 1e-12) {
            printf("Mathematical Error: Zero pivot encountered.\n");
            return 1;
        }

        // Eliminate elements below pivot
        for (int k = i + 1; k < n; k++) {

            m = a[k][i] / a[i][i];

            // Update remaining elements
            for (int j = i; j <= n; j++) { //for (int j = i + 1; j <= n; j++) {
                a[k][j] = a[k][j] - m * a[i][j];
            }

            // Make the element below pivot exactly zero
            // a[k][i] = 0.0;
        }
    }

    printf("\nupper triangularized Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%lf ", a[i][j]);
        }
        printf("\n");
    }

    // Check last pivot
    if (fabs(a[n - 1][n - 1]) < 1e-12) {
        printf("Mathematical Error: Matrix is singular.\n");
        return 1;
    }

    // ==========================================
    // PHASE 2: BACK SUBSTITUTION
    // ==========================================

    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];

    for (int i = n - 2; i >= 0; i--) {

        sum = 0.0;

        for (int j = i + 1; j < n; j++) {
            sum = sum + a[i][j] * x[j];
        }

        x[i] = (a[i][n] - sum) / a[i][i];
    }

    // ==========================================
    // PHASE 3: PRINT SOLUTION
    // ==========================================

    printf("\nSolution:\n");

    for (int i = 0; i < n; i++) {
        printf("x[%d] = %.4f\n", i + 1, x[i]);
    }

    return 0;
}