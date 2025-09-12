#include <stdio.h>
#define size 100

int queue[size],front=-1,rear=-1;

void enqueue(int x){
    if(front == size-1){
        printf("queue overflow!can't add elements");
    }
    else{
        if(front == -1){
            front=0;
        }
        queue[++rear]=x;
        printf("%d equeued to queue\n",x);
    }
}

void dequeue(){
    if(front == -1 || front>rear){
        printf("queue is empty!");
    }
    else{
        printf("%d dequeue from queue\n",queue[front++]);
    }
}

void peek(){
    if(front == -1 || front>rear){
        printf("queue is empty!");
    }
    else{
        printf("top element is : %d\n",queue[front]);
    }
}

void display(){
   if(front == -1 || front>rear){
        printf("queue is empty!");
   }
   else{
       printf("queue elements are :\n");
       for(int i=front;i<=rear;i++){
           printf("%d ",queue[i]);
       }
       printf("\n");
   }
}

int main(){
    int x,choice;
    while(1){
    printf("-----queue operations-----\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("5.exit\n");
    printf("enter your choice :");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("enter element to enqueue :");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
            break;       
        default:
            printf("invalid choice!\n");     
    }
    }
}