#include<stdio.h>
int square(int a){
    return a*a;
}j
int main(){
    int a,sq;
    printf("Enter a number ",a);
    scanf("%d",&a);
    sq=square(a);
    printf("The square is %d",sq);
    return 0;
}
