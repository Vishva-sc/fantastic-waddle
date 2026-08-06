#include <stdio.h>
#include <math.h>
int main()
{   
    int x, sqt;
    printf("Enter value for x: ");
    scanf("%d", &x);
    sqt = sqrt(x);
    printf("Square root of %d is %d", x, sqt);
    return 0;
}