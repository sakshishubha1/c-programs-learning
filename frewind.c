#include<stdio.h>
int main(){
  FILE *fp=fopen("data.txt","w");
  if(fp==NULL){
      printf("EROR opening file");
      return 1;
  }
  char name[50];
  printf("Enter yoour name");
  fgets(name,sizeof(name),stdin);
  fprintf(fp,"%s",name);
  fclose(fp);
  fp=fopen("data.txt","r");
  if(fp==NULL){
      printf("Eror opening file");
      return 1;
  }
  fgetc(fp);
  fgetc(fp);
  rewind(fp);
  long position;
  position=ftell(fp);
  printf("%ld is the position",position);
  fclose(fp);
  return 0;

  
}