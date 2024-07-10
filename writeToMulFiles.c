/* write data to multiple files given file using cmd line */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *readFromFile(char *);
void writeToFile(char *,char *);
int main(int argc,char *argv[])
{
        char *buf=NULL;
        int cnt,i=0;
        cnt = argc-2;
        printf("%d\n",cnt);
        buf = readFromFile(argv[1]);
        for(i=0;i<cnt;i++)
        {
         writeToFile(buf,argv[2+i]);
        }
        return 0;
}
char *readFromFile(char *filename)
{
        FILE *fp;
        char *p = NULL;
        fp=fopen(filename,"r");

        if(fp==NULL)
        {
                printf("%s file not fouund\n",filename);
                exit(0);
        }

        fseek(fp,0,2);
        long size = ftell(fp);
        rewind(fp);
        p=calloc(1,size+1);
        fread(p,size,1,fp);
        p[size] = '\0';
        fclose(fp);
        return p;
}

void writeToFile(char *buf,char* filename)
{
        FILE *fp;
        fp=fopen(filename,"w");
        if(fp==NULL)
        {
                printf("%s not found\n",filename);
                exit(0);
        }
        fwrite(buf,strlen(buf),1,fp);
        fclose(fp);
}


