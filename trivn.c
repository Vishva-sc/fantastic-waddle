#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
int a,b,c,sum; 

printf("enter first angle of triangle: "); 
scanf("%d",&a); 
printf("enter second angle of triangle: "); 
scanf("%d",&b); 
printf("enter third angle of triangle: "); 
scanf("%d",&c); 
sum=a+b+c; 
if(sum==180) 
{ 
printf("triangle is valid"); 
} 
else 
{ 
printf("triangle is not valid"); 
} 
return 0; 
}
