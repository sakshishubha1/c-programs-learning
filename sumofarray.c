#include<stdio.h>

int sumodd(int arr[], int size){
    int sum = 0, i;
    for(i = 0; i < size; i++){
        if(arr[i] % 2 > 0)
            sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int i, arr[5], result;
    printf("Enter 5 numbers");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    result = sumodd(arr, 5);
    printf("%d is sum", result);
    return 0;
}

