#include<stdio.h>
int main(){
    FILE *fp=fopen("data.txt","w");
    if(fp==NULL){
        printf("problem with opening file");
        return 1;
    }
    fprintf(fp,"%s","HELLO WORLD");
    
    fclose(fp);
    fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("ERROR OPENING FILE");
        return 1;
    }
    char word[50];
   fseek(fp,5,SEEK_SET);
    while(fgets(fp,"%s",word)!=EOF){
        printf("%s",word);
    }
    return 0;
}