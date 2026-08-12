#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int i,j,k,n; 
printf("enter the n"); 
scanf("%d",&n); 
i=0; 
j=1; 
k=i+j; 
while(k<=n) 
{ 
printf("%d\n",k); 
i=j; 
j=k; 
k=i+j; 
} 
return 0;
}