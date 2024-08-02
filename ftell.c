#include<stdio.h>
int main()
{
    FILE *fp;
    int len;
    fp=fopen("Raji.txt","r");
    if(fp==NULL)
    {
        printf("Error !!");
    }
    fseek(fp,0,SEEK_END);
    len = ftell(fp);
    printf("size = %d",len);
    fclose(fp);
}
