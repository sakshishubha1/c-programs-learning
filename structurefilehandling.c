#include<stdio.h>
typedef struct Student{
    char name[50];
    int roll;
    int marks;
}Student;
int main(){
FILE *fp=fopen("student.txt","w");
if(fp==NULL){
    return 1;
}
Student record[3];
int i,j=1;
for(i=0;i<3;i++){
    printf("Enter data for %d student(name,roll number,marks):",j);
    scanf("%s %d %d",record[i].name,&record[i].roll,&record[i].marks);
    fprintf(fp,"%s %d %d\n",record[i].name,record[i].roll,record[i].marks);
    j++;
}
fclose(fp);
fp=fopen("student.txt","r");
if(fp==NULL){
    return 1;
}
Student s;
while(fscanf(fp,"%s %d %d",s.name,&s.roll,&s.marks)!=EOF){
    printf("%s,%d,%d\n",s.name,s.roll,s.marks);
}
fclose(fp);
return 0;
}