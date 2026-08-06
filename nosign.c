#include <stdio.h>
int main(){
    int n;
    printf("Enter value for n: ");
    scanf("%d",&n);
    if(n>0)
    {
    printf("%d: It's a positive number", n);
    }
    else if(n==0)
    {
    printf("%d: It's zero", n);
    }
    else
    {
    printf("%d: It's a negative number", n);
    }
    return 0;
}

