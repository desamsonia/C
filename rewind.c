#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("Raji.txt","r+");
    char ch;
    if(fp == NULL)
    {
        printf("Error ");
    }
    fseek(fp,6,SEEK_SET);
    while(! feof(fp))
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
    rewind(fp);
    while(! feof(fp))
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);

}