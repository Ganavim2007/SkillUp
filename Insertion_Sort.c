//Insertion Sort program

#include<stdio.h>
void InsertionSort(int arr[],n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unsorted Array :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\nSorted Array :\n");
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}