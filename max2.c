#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("The maximum number is %d",a);
    }
    else if(b==a)
    {
        printf("The numbers are equal");
    }
    else
    {
        printf("The maximum number is %d",b);
    }
    return 0;
}