#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    double hours, minutes, seconds;

    while (1) {
        printf("\n===== Time Conversion Menu =====\n");
        printf("1. Hours to Minutes\n");
        printf("2. Hours to Seconds\n");
        printf("3. Minutes to Hours\n");
        printf("4. Minutes to Seconds\n");
        printf("5. Seconds to Hours\n");
        printf("6. Seconds to Minutes\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");

        // Validate menu choice input
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter time in hours: ");
                if (scanf("%lf", &hours) != 1 || hours < 0) {
                    printf("Invalid input. Please enter a positive number.\n");
                    while (getchar() != '\n');
                    break;
                }
                minutes = hours * 60;
                printf("%.2lf hours = %.2lf minutes\n", hours, minutes);
                break;

            case 2:
                printf("Enter time in hours: ");
                if (scanf("%lf", &hours) != 1 || hours < 0) {
                    printf("Invalid input. Please enter a positive number.\n");
                    while (getchar() != '\n');
                    break;
                }
                seconds = hours * 3600;
                printf("%.2lf hours = %.2lf seconds\n", hours, seconds);
                break;

            case 3:
                printf("Enter time in minutes: ");
                if (scanf("%lf", &minutes) != 1 || minutes < 0) {
                    printf("Invalid input. Please enter a positive number.\n");
                    while (getchar() != '\n');
                    break;
                }
                hours = minutes / 60;
                printf("%.2lf minutes = %.2lf hours\n", minutes, hours);
                break;

            case 4:
                printf("Enter time in minutes: ");
                if (scanf("%lf", &minutes) != 1 || minutes < 0) {
                    printf("Invalid input. Please enter a positive number.\n");
                    while (getchar() != '\n');
                    break;
                }
                seconds = minutes * 60;
                printf("%.2lf minutes = %.2lf seconds\n", minutes, seconds);
                break;

            case 5:
                printf("Enter time in seconds: ");
                if (scanf("%lf", &seconds) != 1 || seconds < 0) {
                    printf("Invalid input. Please enter a positive number.\n");
                    while (getchar() != '\n');
                    break;
                }
                hours = seconds / 3600;
                printf("%.2lf seconds = %.2lf hours\n", seconds, hours);
                break;

            case 6:
                printf("Enter time in seconds: ");
                if (scanf("%lf", &seconds) != 1 || seconds < 0) {
                    printf("Invalid input. Please enter a positive number.\n");
                    while (getchar() != '\n');
                    break;
                }
                minutes = seconds / 60;
                printf("%.2lf seconds = %.2lf minutes\n", seconds, minutes);
                break;

            case 7:
                printf("Exiting program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice. Please select between 1 and 7.\n");
        }
    }

    return 0;
}