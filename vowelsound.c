#include<stdio.h>
int vowel(char *word){
    int i,count=0;
    for(i=0;word[i] !='\0';i++){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' ||
           word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
            count=count+1;
}
}
return count;
}
int main(){
    char word[]="Hello";
    int v=vowel(word);
    printf("%d is the amount of vowel numbers",v);
    return 0;
}