#include<stdio.h>
int order(int num[],int size){
    int i;
 for(i=0;i<size-1;i++){
     if(num[i]>num[i+1])
     return 0;
 else
 return 1;
 }
}
int main(){
    int num[5],i;
    printf("Enter 5 number");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    if(order(num,5))
        printf("it is in ascending ");
        else
        printf("it is not in ascending order");
    return 0;
}