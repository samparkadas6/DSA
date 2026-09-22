#include<stdio.h>
int binarysearch(int array[],int x,int low, int high){
    if (high >= low){
        int mid = (low+(high-low)/2);
        if (x == array[mid])
        return mid;
    if (x>array[mid])
    return binarysearch(array,x,mid+1,high);
else
return binarysearch(array,x,low,mid-1);
    }
    return -1;
}
int main(){
    int array[]={10,15,20,25,30,35,40,45,50,55,60};
    int n = 11;
    int x = 45;
    int result = binarysearch(array,x,0,11-1);
    if(x == -1){
        printf("not found");} 
        else{
            printf("found at %d",result);
        }
    
    return 0;
}