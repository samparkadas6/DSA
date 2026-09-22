#include<stdio.h>
void bubbleSort(int data[],int size){
    for(int step = 0;step < size - 1;step++){
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
int main(){
    int data[] = {6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof(data[0]);
       printf("sorted array\n");
    bubbleSort(data,size);
    return 0;
}
