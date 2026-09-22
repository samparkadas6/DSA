#include <stdio.h>
void merge(int arr[],int low,int mid,int high){
    int n1 = mid - low + 1;//for size of left side
    int n2 = high - mid;//for size of right side
    int L[n1],M[n2];//2 arrays l for left , m array for right(array size)
    for(int i = 0;i<n1;i++){
        L[i] = arr[low+i];//L[i] initially = 0 then increasing upto n1
    }
    for(int j = 0;j<n2;j++){
        M[j] = arr[mid +1+j];//M[j] initially M[j] =6 then icreasing upyo n2
    }
    int i = 0;
    int j = 0;
    int k = low;//this is empty array
    while(i<n1 && j<n2){
        if(L[i]<M[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = M[j];
        j++;
        k++;
    }
  }
  void mergesort(int arr[],int low ,int high){
    if(low<high){
      int mid = low +(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
  }    
//   void merge(int arr[],int low,int mid,int high){
//     int n1 = mid - low + 1;
//     int n2 = high - mid;
//     int L[n1],M[n2];
//     for(int i = 0;i<n1;i++){
//         L[i] = arr[low+i];
//     }
//     for(int j = 0;j<n2;j++){
//         M[j] = arr[mid +1+j];
//     }
//     int i = 0;
//     int j = 0;
//     int k = low;
//     while(i<n1 && j<n2){
//         if(L[i]<M[j]){
//             arr[k] = L[i];
//             i++;
//         }else{
//             arr[k] = M[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<n1){
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while(j<n2){
//         arr[k] = M[j];
//         j++;
//         k++;
//     }
//   }
int main(){
int arr[] = {8,4,3,1,6,9,7,5};
int low = 0;
int high = sizeof(arr)/sizeof(arr[0]) - 1;
 printf("Original array:\n");
    for (int i = 0; i <  sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    mergesort(arr, low,high);
    printf("\nSorted array:\n");
    for (int i = 0; i <  sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}