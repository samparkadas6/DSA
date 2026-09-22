#include<stdio.h>
void bubblesort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        if (i == 3){
            break;
        }
        for (int j = 0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        for(int j = 0;j<n;j++){
           printf(" %d ",arr[j]);}
           printf("\n");  
    }
}
int linear(int arr[],int n,int x){
    for(int i = 0;i<n;i++){
        if (arr[i] == x){
            return i;
        }else{
            return -2;
        }
    }
}
int main(){
    int arr[] = {31,18,42,7,25,13};
    int n = sizeof(arr)/sizeof (arr[0]);
    int x = 25;
    bubblesort(arr,n);
   int result = linear(arr,x,n);
   if(result = -2){
    printf("not found");
   }else{
    printf("found at %d",result);
   } 
}