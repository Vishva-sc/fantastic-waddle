#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("Enter value for a:");
    scanf("%d",&a);
    if(a==1 || a==0)
    {
        printf("The number is 1 or 0");
    }
    else if(a%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}