<<<<<<< HEAD
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
=======
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
>>>>>>> 4e93fe4cd4e2f6c53133a0b2283523033c4334b6
