#include<stdio.h>
int second(int num[],int size){
int secondgreatest, greatest,i;
greatest=num[0];
secondgreatest= num[0];
for(i=0;i<size;i++){
    if(num[i]>greatest){
        secondgreatest=greatest;
    greatest=num[i];
}
else if(num[i]<greatest&&num[i]>secondgreatest){
    secondgreatest=num[i];
}
}
return secondgreatest ;
}
int main(){
int num[5],i,result;
printf("Enter five numbers ");
for(i=0;i<5;i++){
    scanf("%d",&num[i]);
}
result= second(num,5);
printf("The second greatest is %d\n",result);
return 0;
}

#include<stdio.h>
int order(int num[],int size){
    int i;
 for(i=0;i<size-1;i++){
     if(num[i]>num[i+1])
     return 0;
 else
 return 1;
 }
}