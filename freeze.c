#include <stdio.h>  
#include <conio.h> 
int main() 
{ 
float temperature; 
printf ("enter the temperature is Celsius: "); 
scanf("%f",&temperature); 
temperature<=0?printf("the temperature is below freezing point \n"):printf("the temperature is above freezing point \n");  
return 0;  
} 