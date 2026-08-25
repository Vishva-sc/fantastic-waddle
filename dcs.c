#include <stdio.h>

int main() {
    char ch;

    // Read a single character from the input
    printf("Enter a character: ");
    scanf(" %c", &ch); // The space before %c skips any preceding whitespace/newlines

    // Classify using character ranges
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("letter\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("digit\n");
    } else {
        printf("special character\n");
    }

    return 0;
}
