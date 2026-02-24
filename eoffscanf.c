#include<stdio.h>
int main(){
    FILE *fp=fopen("dipesh.txt","w");
    if(fp==NULL)
    return 1;
    int arr[5];
    int i=0;
    for(i;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        fprintf(fp,"%d\n",arr[i]);
    }
    fclose(fp);
    fp=fopen("dipesh.txt","r");
    if(fp==NULL)
    return 1;
    while(fscanf(fp,"%d",&arr[i])!=EOF){
    i++;
   
}
fclose(fp);
int j;
for(j=0;j<5;j++){
    printf("%d",arr[j]);
}
return 0;
}