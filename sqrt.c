#include <stdio.h>
#include <math.h>
int main()
{   
    int x;
    float sqt;
    printf("Enter value for x: ");
    scanf("%d", &x);
    sqt = sqrt(x);
    printf("Square root of %d is %.2f", x, sqt);
    return 0;
}