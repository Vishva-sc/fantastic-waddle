#include <stdio.h> 
#include<conio.h> 
int main() 
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    if (num % 5 == 0 && num % 8 == 0) { 
        printf("%d is divisible by both 5 and 8.\n", num); 
    } else if (num % 5 == 0) { 
        printf("%d is only divisible by 5.\n", num); 
    } else if (num % 8 == 0) { 
        printf("%d is only divisible by 8.\n", num); 
    } else { 
        printf("%d is not divisible by 5 or 8.\n", num); 
    } 
    return 0;
}