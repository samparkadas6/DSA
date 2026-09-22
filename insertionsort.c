#include<stdio.h>
void insertionsort(int arr[],int size){
    for(int step = 1;step<size;step++){
        int key = arr[step];
        int j = step - 1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            --j;
        }
           arr[j+1] = key;
        for(int i = 0;i<size;i++){
        printf(" %d",arr[i]);}
        printf("\n");
    
         
    }
}
int main(){
    int arr[] = {6,4,7,8,1,9,5};
    int size = sizeof(arr)/sizeof(arr[0]);
insertionsort(arr,size);
    printf("sorted array\n");
    return 0;
}  
