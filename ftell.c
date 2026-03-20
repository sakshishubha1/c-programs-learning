#include<stdio.h>
int main(){
    FILE *fp=fopen("data.txt","w");
    if(fp==NULL){
        printf("EROR OPENING FILE");
        return 1;
    }
    char name[50];
    printf("Enter your name");
    scanf("%s",name);
    fprintf(fp,"%s",name);
    fclose(fp);
    fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("EROR OPENING FILE");
        return 1;
    }
    long position ;
    fgetc(fp);
    fgetc(fp);
    position=ftell(fp);
    printf("%ld is the current position ",position);
    fclose(fp);
    return 0;
}