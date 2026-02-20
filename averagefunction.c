#include<stdio.h>
float average(float arr[],int size){
    float avg,sum=0;
    int i;
    for(i=0;i<size;i++){
        sum=arr[i]+sum;
    }
    avg=sum/size;
    return avg; 
}
int main(){
    float arr[5],result;
    int i;
    printf("enter five numbers");
    for(i=0;i<5;i++){
        scanf("%f",&arr[i]);
    }
    result=average(arr,5);
    printf("%f is average",result);
    return 0;
}
