#include<stdio.h>

int multiply(void){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    return a*b;
}

void display(int result){
    printf("the product is %d\n",result);
}

int main(void){
    int s;
    s = multiply();
    display(s);
    return 0;
}