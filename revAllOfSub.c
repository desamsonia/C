#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void strRev(char *str,char *dst)
{
	int i,j;
	for(i=0,j=strlen(str)-1;j>=0;i++,j--)
	{
		dst[i] = str[j];
	}
	dst[i] = '\0';
}

void revSubStr(char *filename,char *substr)
{
  FILE *fp;
  char *p=NULL;
  fp=fopen(filename,"r+");
  char str[100];
  char rev[50];
  strRev(substr,rev);
  if(fp==NULL) { printf("%s file not fouund\n",filename); exit(0);}
  while(fgets(str,100,fp))
  {
	  p=str;
	  while(p=strstr(p,substr))
	  {
		  strncpy(p,rev,strlen(rev));
		  p=p+strlen(rev);
	  }
	  fseek(fp,-strlen(str),1);
	  fputs(str,fp);
  }
  fclose(fp);

}	


int main(int argc,char *argv[])
{
	if(argc != 3)
	{
		printf("incorrect inputs\n");
		exit(0);
	}
	revSubStr(argv[1],argv[2]);
}
