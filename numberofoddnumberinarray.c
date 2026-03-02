#include<stdio.h>
int count(int *arr,int size){
    int count=0;
    int i;
    for(i=0;i<size;i++){
        if(*(arr+i)%2>0)
        count=count+1;
    }
    return count;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int result,i;
    result=count(arr,5);
    printf(" the number of odd numbers is %d ",result);
    return 0;
}

