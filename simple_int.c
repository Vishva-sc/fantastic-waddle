#include <stdio.h>
#include <conio.h>
int main(){
    int P,R,N;
    float SI;
    printf("Enter the Principal Amount: ");
    scanf("%d",&P);
    printf("Enter the Rate of Interest: ");
    scanf("%d",&R);
    printf("Enter the Time Period in years: ");
    scanf("%d",&N);
    SI = (P * R * N) / 100;
    printf("The Simple Interest is: %.2f", SI);
    return 0;
}