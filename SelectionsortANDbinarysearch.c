#include<stdio.h>
void selectionsort(int arr[],int n){
    for(int i = 0;i<n;i++){
        if(i == 2){
            break;
        }
        int minidx = i;
        for(int j = i+1;j<n;j++){
            if (arr[minidx]>arr[j]){
                minidx = j;
            }
        } 
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
        for(int j = 0;j<n;j++){
           printf(" %d ",arr[j]);}
           printf("\n");  
}

    }
    int binarysearch(int arr[],int x,int low,int high){
    while(low <= high){
        int mid = low + (high - low)/2;
        if (x == arr[mid]){
            return mid;
        }
        if(x>arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
    
int main(){
    int arr[] = {42,17,8,31,23,15,4};
    int n = (sizeof(arr)/sizeof(arr[0])) ;
    int x = 23;
    printf("sorted array");
    selectionsort(arr,n);
    int result = binarysearch(arr,x,0,n-1);
    if (result == -1){
        printf("not found");
    }
    else{
        printf("found at %d",result);
    }
    return 0;
}