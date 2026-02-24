#include<stdio.h>
 int main(){
     FILE *fp=fopen("jyapu.txt","w");
     if (fp==NULL)
     return 1;
     fprintf(fp,"%s","SHUBHA");
     fprintf(fp,"%s","ANWESH");
     fprintf(fp,"%s","PRANT");
     fclose(fp);
    fp=fopen("jyapu.txt","r");
     if(fp==NULL)
     return 1;
     char line[100];
     while(fgets(line,sizeof(line),fp)!=NULL){
         printf("%s",line);
     }
     fclose(fp);
     return 0;
 }
 