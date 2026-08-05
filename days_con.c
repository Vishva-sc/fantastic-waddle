#include<stdio.h> 
int main() 
{ 
int days,year,months,RD; 
printf("enter days: "); 
scanf("%d",&days); 
year=days/365; 
months=(days-year*365)/30; 
RD=(days-year*365-months*30); 
printf("%d days = %d year %d months and %d remining days",days,year,months,RD); 
return 0;
}