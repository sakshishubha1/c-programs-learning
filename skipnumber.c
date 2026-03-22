#include<stdio.h>
int main(){
    FILE *fp=fopen("data.txt","w");
    if(fp==NULL){
        printf("FILE NOT FOUND");
        return 1;
    }
    fprintf(fp,"%d %d %d %d %d",10, 20, 30, 40, 50);
    fclose(fp);
    fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("FILE NOT FOUND");
        return 1;
    }
    int i;
    int number;
    for(i=0;i<3;i++){
        fscanf(fp,"%d",&name);
    }
    fscanf(fp,"%d",&name);
    printf("%d",name);
    fclose(fp);
    return 0;
}