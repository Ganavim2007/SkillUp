//bubble Sort program

#include<stdio.h>
void bubbleSort(arr[],n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("unsorted elements :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    bubbleSort(arr,n);
    
    printf("\nsorted elements :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}