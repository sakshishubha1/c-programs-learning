#include<stdio.h>
int main(){
    int arr[3][4],a[3][4],sum[3][4];
    printf("Enter elements for first matrix");
    int i,j;
    for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("Enter element of arr[%d][%d]",i,j);
        scanf("%d",&arr[i][j]);
    }
    }
    printf("Enter element of second matrix");
        for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("Enter element of arr[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            sum[i][j]=arr[i][j]+a[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}