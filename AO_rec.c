#include <stdio.h>
#include <conio.h>
int main()
{
    float l,b,area;
    printf("Enter the length of rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&b);
    area=l*b;
    printf("Area of rectangle is: %.2f",area);
    return 0;
}