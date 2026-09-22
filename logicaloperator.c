#include<stdio.h>
int main(){
    int n;
    printf("enter the vaalue of n");
    scanf("%d",&n);
    if(n%5 == 0 && n%3 == 0){
        printf("divisible by 5 and 3");}
        else{
            printf("not divisible");
        }
        return 0 ;
    }
