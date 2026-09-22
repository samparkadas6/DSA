#include<stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main(){
  int a = 1;
    // printf("enter value a");
    // scanf("%d",&a);
int  b = 0;
printf("value a is %d\n",a);
printf("value b is %d\n",b);
    printf("after swapping \n");
    swap(&a,&b);
    // printf("enter b");
    // scanf("%d",&b);
    // a = a+b;
    // b = a-b;
    // a = a-b;
      printf("value a is %d\n",a);
     printf("value b is %d\n",b);
    return 0; 
}