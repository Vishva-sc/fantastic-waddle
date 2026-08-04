#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, km, rm;
    printf("enter the value: "); 
    scanf("%d",&m); 
    km=m/1000; 
    rm=m%1000; 
    printf("%d = m\n" "%d=km\n" "%d=rm\n",m,km,rm);
    return 0;
}