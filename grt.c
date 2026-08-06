#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value for a:");
    scanf("%d",&a); 
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("Enter value for c:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("The maximum number is %d",a);
    }
    else if(b>a && b>c)
    {
        printf("The maximum number is %d",b);
    }
    else if(c>a && c>b)
    {
        printf("The maximum number is %d",c);
    }
    else
    {
        printf("The numbers are equal");
    }
    return 0;
}