#include <stdio.h>
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
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
int arr[] = { 44,17,29,8,36,12,51,23,5,33};
int x = 36;
int low = 0;
int high = (sizeof(arr) / sizeof(arr[0])) - 1;
// int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        printf("%d ", arr[i]);
    }
    quicksort(arr, low, high);
    printf("\nSorted array:\n");
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int result = binarysearch(arr,x,low,high);
    if (result == -1){
        printf("not found\n");

    }else{
        printf("found at %d",result);
    }
}