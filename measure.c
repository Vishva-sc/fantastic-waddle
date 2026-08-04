#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, cm, centim;
    printf("enter the value: ");
    scanf("%d",&centim);
    m=centim/100;
    cm=centim%100;
    printf("%d = m\n" "%d=cm\n" "%d=centim\n",centim,m,cm);
    return 0;
}