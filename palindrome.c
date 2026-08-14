#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int original = n;
    int rev=0;
    
    while (n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if (original==rev)
    {
        printf("%d is a palindrome number\n",original);
    }
    else
    {
        printf("%d is not a palindrome number\n",original);
    }
}