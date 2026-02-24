#include<stdio.h>

int main() {
    FILE *fp = fopen("shubha.txt", "w");

    if (fp == NULL)
        return 1;

    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    fprintf(fp, "%s", name);

    fclose(fp);
    return 0;
}