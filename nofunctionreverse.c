#include<stdio.h>
void reverse(int *arr,int size){
    int temp;
    int *first,*last;
    first=arr;
     last=(arr+size-1);
     while(first<last){
        temp=*first;
        *first=*last;
        *last=temp;
        first++;
        last--;
    }
}
int main(){
    int arr[5];
    int i;
    printf("Enter 5 numbers");
    for(i=0;i<5;i++){
        scanf("%d",(arr+i));
    }
        reverse(arr,5);
    printf("The reversed order is ");
    for(i=0;i<5;i++){
        printf("%d\n",*(arr+i));
    }
    return 0;
    
}