#include<stdio.h>
typedef struct{
    char name[100];
    int roll;
    int marks;
}Student;
int main(){
    FILE *fp=fopen("student.txt","wb");
    if(fp==NULL)
    return 1;
    Student record[3];
    int i;
    for(i=0;i<3;i++){
        scanf("%s %d %d",record[i].name,&record[i].roll,&record[i].marks);
        fwrite(&record[i],sizeof(Student),1,fp);
    }
    fclose(fp);
    fp=fopen("student.txt","rb");
    Student s;
    while(fread(&s,sizeof(s),1,fp)==1){
        printf("%s %d %d\n ",s.name,s.roll,s.marks);
    }
    fclose(fp);
    return 0;
}