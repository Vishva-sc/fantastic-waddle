#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rN=(rand()%100)+1;

    for ( ; ; )
    {
        int n=0;
        printf("Enter a number between 1 and 100: ");
        scanf("%d",&n);

        if(n>rN)
        {
            printf("The number is too high\n");
        }
        else if(n<rN)
        {
            printf("The number is too low\n");
        }
        else
        {
            printf("You guessed the number!\n");
            break;
        }

    }
    return 0;
}