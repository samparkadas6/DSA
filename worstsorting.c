#include<stdio.h>
void bubbleSort(int data[],int size){
    for(int step = 0;step < size - 1;step++){
        if(step == 1){
            break;
        }
        for(int i = 0;i<size-step-1;i++){
            if (data[i] > data[i+1]){
                int temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;  
            }
        }
         for(int i = 0;i<size;i++){
        printf(" %d",data[i]);}
        printf("\n");
}
        }
        void selectionsort(int data[],int size){
    for(int step = 0;step<size - 1;step++){
         int min_idx = step;
        for(int i = step + 1; i<size;i++){
            if(data[i]<data[min_idx]){
                min_idx = i;
            }
        }
        int temp = data[min_idx];
        data[min_idx] = data[step];
        data[step] = temp;
        for(int i = 0;i<size;i++){
        printf(" %d",data[i]);}
        printf("\n");
    }
         for(int i = 0;i<size;i++){
        printf(" %d",data[i]);}
        printf("\n");
}
int main(){
    int data[] = {6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof(data[0]);
       printf("sorted array first iteration\n");
    bubbleSort(data,size);
    printf("after first iteration\n");
    selectionsort(data,size);
    return 0;
}
