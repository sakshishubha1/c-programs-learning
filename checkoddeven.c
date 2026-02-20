#include<stdio.h>
void  check( void);{
int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
    printf("it is even");
    else 
    printf("It is odd");
}

int main(){
    check() ;
    check();
    return 0;
}