//Reverse of number 
#include <stdio.h>
int main() {
     int n,rev=0,r;
     printf("enter number:\n");
     scanf("%d",&n);
     int og=n;
     while(n>0){
         r=n%10;
         rev=rev*10+r;
         n=n/10;
     }
     printf("reverse of number %d is:%d\n",og,rev);
}