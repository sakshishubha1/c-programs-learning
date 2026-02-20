#include<stdio.h>
int check(void){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
    printf("it is even");
    else 
    printf("It is odd");
}
int main(void){
    check() ;
    check();
    return 0;
}
