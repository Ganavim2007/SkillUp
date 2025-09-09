//simple calculator 

#include <stdio.h>
int main() {
       int a,b;
       printf("enter two numbers:\n");
       scanf("%d",&a);
       scanf("%d",&b);
       int sum=a+b;
       printf("sum of two numbers:%d\n",sum);
       int diff=a-b;
       printf("difference of two numbers:%d\n",diff);
       int mul=a*b;
       printf("multiplication of two numbers:%d\n",mul);
       int div=a/b;
       printf("divivision of two numbers:%d\n",div);
       return 0;
}