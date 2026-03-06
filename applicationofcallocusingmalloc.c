#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("Enter size  of memory ");
    scanf("%d",&n);
    if (n<=0)
    return 1;
    int *p=malloc(n*sizeof(*p));
    if(p=NULL)
    return 1;
    for(i=0;i<n;i++):
    p[i]=0;
}
free(p);
p=NULL;
    return 0;
}