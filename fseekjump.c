#include<stdio.h>
int main(){
    FILE *fp=fopen("data.bin","wb");
    if(fp==NULL){
        printf("EROR");
        return 1;
    }
    int arr[5]={1,2,3,4,5};
    fwrite(arr,sizeof(int),5,fp);
    fclose(fp);
    fp=fopen("data.bin","rb");
    if(fp==NULL){
        return 1;
    }
    int number;
    fseek(fp,2*sizeof(int),SEEK_SET);
    fread(&number,sizeof(int),1,fp);
    printf("%d",number);
    fclose(fp);
    return 0;
    
    
}