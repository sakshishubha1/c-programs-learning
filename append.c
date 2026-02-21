#include<stdio.h>
int main(){
    int x;
    FILE *fp=fopen("data.txt","a");
    if(fp==NULL){
    return 1;
    }
    printf("Enter number to append");
    scanf("%d",&x);
    fprintf(fp,"%d",x);
    fclose(fp);
    return 0;


}
