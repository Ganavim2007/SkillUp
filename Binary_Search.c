//Binary search program 

#include <stdio.h>
int BinarySearch(arr[],n,key){
    int low=0;int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) high=mid-1;
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the sorted array elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("sorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter element to search :");
    scanf("%d",&key);
    
    int results=BinarySearch(arr,n,key);
    
    if(results != -1){
        printf("element found at position %d\n",results+1);
    }
    else{
        printf("element not found in Array");
    }
}