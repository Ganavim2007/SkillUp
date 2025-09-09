//fibonacci series 

#include <stdio.h>
int main() {
     int n,a=0,b=1,c;
     printf("enter the number:\n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
         printf("\n%d\n",a);
         c=a+b;
         a=b;
         b=c;
         
     }
     printf("\nfibonacci of %d is:%d\n",n,a);
}