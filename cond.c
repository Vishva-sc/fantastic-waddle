#include<stdio.h>    
#include <conio.h> 
    int main() { 
        int pass, fail, sub1, sub2, sub3, sub4, total; 
        printf("enter marks for sub1:\n"); 
        scanf("%d",&sub1); 
        printf("enter marks for sub2:\n"); 
        scanf("%d" ,&sub2); 
        printf("enter marks for sub3:\n"); 
        scanf("%d",&sub3); 
        printf("enter marks for sub4:\n"); 
        scanf("%d",&sub4); 
        total=sub1+sub2+sub3+sub4; 
        (total>60)?printf("student has passed\n"):printf("student has failed\n"); 
        return 0;
        }