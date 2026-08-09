#include<stdio.h>
#include<conio.h> 
    int main()
    {
        int n,i;
        printf("enter the number : ");
        scanf("%d",&n);
        printf("\naddition:\n");
        for (i=1;i<=n;i++)
        {
            printf("%d\n",i);
        }
        printf("\nmultiplication:\n");
        for(i=1;i<=n;i++) 
        {
        printf("%d*%d=%d\n",i,n,i*n); 
        }
        return 0;
    }