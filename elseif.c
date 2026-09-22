#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if (marks > 80){
        printf("A grade");
    }
    else if (marks > 50){
        printf("B grade");
    }
    else 
        printf(" fail");
    return 0;
}