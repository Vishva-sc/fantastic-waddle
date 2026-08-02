#include <stdio.h>
#include <conio.h>
int main(){
    float L;
    printf("Enter the length in cm: ");
    scanf("%f", &L);
    float area = L * L;
    printf("Area of the square is: %.2f cm^2\n", area);
    return 0;
}