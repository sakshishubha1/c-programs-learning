#include<stdio.h>
int main(){
    FILE *fp=fopen("data.txt","w");
    if(fp==NULL)
    return 1;
    printf("Enter number to add");
    int x;
    scanf("%d",&x);
    fprintf(fp,"%d",x);
    fclose(fp);
    fp=fopen("data.txt","r+");
    int a;
    fscanf(fp,"%d",&a)
    printf("The number inside the file was %d",a);
    rewind(fp);
    fprintf(fp,"%d",999);
    fclose(fp);
    return 0;
    
}