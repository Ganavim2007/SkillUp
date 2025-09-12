#include <stdio.h>
#define max 100
int stack[max];
int top=-1;

void push(int val){
    if(top == max-1){
        printf("stack overflow!cannot add element");
    }
    else{
        stack[++top]=val;
        printf("%d is pushed to stack",val);
    }
}

void pop(){
    if(top == -1){
        printf("stack underflow!no element to pop");
    }
    else{
        printf("%d poped from stack",stack[top--]);
    }
}

void peek(){
    if(top == -1){
        printf("stack is empty");
    }
    else{
        printf("top element of stack is : %d ",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("stack is empty");
    }
    else{
        printf("stack elements are :");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int val,choice;
    while(1){
        printf("-----stack operations-----\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("5.exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter value to push :");
                scanf("%d",&val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("invalid choice!\n");    
        }
    }
}