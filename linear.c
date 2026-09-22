#include <stdio.h>
int linearsearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i; 
        }
    }
    return -1;  
}
int main(){
    int arr[] = {10,15,20,25,30,35,40,45,50,55,60};
    int n = 11;
    int x = 45;
    int result = linearsearch(arr,n,x);
    if (result == -1){
        printf("not found");
    }
    else{
        printf("found at %d",result);
    }
    return 0;
}