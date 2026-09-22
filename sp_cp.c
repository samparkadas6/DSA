#include<stdio.h>
int main(){
int cp;
printf("enter the value of cp");
scanf("%d",&cp);
int sp;
printf("enter the value of sp");
scanf("%d",&sp);
if(sp>cp){
    printf("profit");
}
if(cp>sp){
    printf("loss");
}
if(cp == sp){
    printf("no loss no profit");
}
return 0;
}