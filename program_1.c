//swapping of two numbers without third variable 

#include <stdio.h>          
int main() {                
     int a,b;
     printf("enter two numbers:\n ");
     scanf("%d %d",&a,&b);
     printf("before swaping a=%d b=%d",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("\nafter swaping a=%d b=%d",a,b);
     return 0;               
}