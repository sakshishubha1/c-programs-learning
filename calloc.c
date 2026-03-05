#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("Enter size of array ");
    scanf("%d",&n);
    if(n<=0)
    return 1;
    int *p=calloc(n,sizeof(*p));
    if (p==NULL){
    return 1;
    }
    for(i=0;i<n;i++){
        printf("%d\t",p[i]);
        printf("\n");
    }
    free(p);
    p=NULL;
return 0;
}