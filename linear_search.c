//linear search program 

#include <stdio.h>
int main(){
    int n,key;
    printf("enter size of array:");
    scanf("%d",&n);
    int flag=0;
    int arr[n];
    printf("enter the array elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element to search :");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            printf("element found at position %d\n",i+1);
            flag=1;
            break;
        }
    }
    if(!flag){
        printf("Element not fount in array\n");
    }   
}