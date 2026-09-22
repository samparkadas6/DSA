
#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
int isfull(){
    return top == MAX - 1;
}
int isempty(){
    return top == -1;
}
void push(int value){
    if(isfull()){
        printf("stack overflow");
    }
    else{
        top++;
        stack[top] = value;
        printf("pushed %d",value);
    }
}
int pop(){
    if(isempty()){
        printf("stack underflow");
        return -1;
    }else{
        int poppedvalue = stack[top];
        top--;
        return poppedvalue;
    }
}
int peek(){
    if (isempty()){
        printf("stack empty");
        return -1 ;
    }
    return stack[top];
}
void display(){
    if(isempty()){
        printf("empty");
        return;
    }
    printf("stack element");
    for(int i = top;i>= 0;i--){
        printf("%d",stack[i]);
    }
    printf("\n");
    }
    int main(){
        push(10);
        push(20);
        push(30);
        display();
        printf("top element = %d",peek());
        printf("popped = %d",pop());
        display();
        return 0;
    }
