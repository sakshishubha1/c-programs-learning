#include<stdio.h>
typedef struct{
    char name[100];
    int roll;
    int marks;
}Student;
int main(){
    while(1){
    int n;
    printf("enter 1  to add students record ,enter 2  to view all student records,enter 3 to Search student through roll number ,4 to exit ");
    scanf("%d",&n);
    switch(n){
        case 1:{
        int n1;
       FILE *fp=fopen("prant.txt","a");
        if(fp==NULL){
        printf("The file did not open");
        return 1;
        }
        printf("How many records do you want to add ?");
        scanf("%d",&n1);
        Student record[n1];
        int i;
        for(i=0;i<n1;i++){
            printf("Enter data for %d student name,roll number,marks: ",i+1);
            scanf("%s %d %d",record[i].name,&record[i].roll,&record[i].marks);
            fprintf(fp,"%s %d %d\n",record[i].name,record[i].roll,record[i].marks);
        }
        fclose(fp);
        break;
    }
    
    case 2:{
    FILE *fp=fopen("prant.txt","r");
    if(fp==NULL){
     printf("record not found");
    return 1;
    }
    Student s;
    while(fscanf(fp,"%s %d %d",s.name,&s.roll,&s.marks)!=EOF){
        printf("%s %d %d\n",s.name,s.roll,s.marks);
    }
    fclose(fp);
 break;
}
 case 3:{
 FILE *fp=fopen("prant.txt","r");
 if(fp==NULL){
 printf("record not found");
 return 1;
 }
 int n2;
 int result=0;
 printf("enter roll number of student ");
 scanf("%d",&n2);
 Student s;
 while(fscanf(fp,"%s %d %d",s.name,&s.roll,&s.marks)==3){
    if(n2==s.roll){
    printf("%s %d %d\n",s.name,s.roll,s.marks);
    result=1;   
    break;
    }
 }
  if(!result){
        printf("result not found");
      
    }
    fclose(fp);
    break;
}

 case 4:
printf("Exiting menu\n ");
return 0;

default:
printf("ERROR");
break;
 }
}
return 0;
}