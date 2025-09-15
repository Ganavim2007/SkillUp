#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insertAtBeginning(int val){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=head;
    head=newNode;
    printf("%d inserted at beginning\n",val);
}

void insertAtEnd(int val){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    if(head == NULL){
        head=newNode;
    }
    else{
        struct Node* temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    printf("%d inserted at end\n",val);
}
// Delete a node by value
void deleteNode(int val) {
    struct Node *temp = head, *prev = NULL;

    if (temp != NULL && temp->data == val) {
        head = temp->next;
        free(temp);
        printf("%d deleted\n", val);
        return;
    }

    while (temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("%d not found in list\n", val);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("%d deleted\n", val);
}

// Display linked list
void display(){
    if(head == NULL){
        printf("linked list is empty");
        return;
    }
    struct Node* temp=head;
    printf("linked list:\n");
    while(temp != NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice, val;

    while (1) {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete a Node\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insertAtBeginning(val);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &val);
                insertAtEnd(val);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                deleteNode(val);
                break;
            case 4:
                display();
                break;
            case 5:
                // free all nodes before exit
                while (head != NULL) {
                    struct Node* temp = head;
                    head = head->next;
                    free(temp);
                }
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}