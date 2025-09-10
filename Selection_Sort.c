//select Sort program

#include<stdio.h>
void SelectionSort(arr[],n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] > arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}