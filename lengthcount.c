
#include<stdio.h>
int count(char *name){
    char *p=name;
    int l=0;
    while(*p!='\0'){
        p++;
        l++;
    }
    return l;
}
int main(){
    char name[]="Shubha";
    int length;
    length=count(name);
    printf("%d is the length of the name",length);
    return 0;
}