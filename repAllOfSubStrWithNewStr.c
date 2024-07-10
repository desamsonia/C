#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *readFromFile(char *);
void writeToFile(char *,char *);
char *repAllOfSubStrWithNewStr(char *str,char *s1,char *s2)
{
	char *p;
	p=NULL;
	int i;
	int l1=strlen(s1);
	int l2=strlen(s2);
	p=str;
	while(p=strstr(p,s1))
	{
		i=p-str;
		if(l2>l1)
		{
			str=realloc(str,strlen(str)+1+(l2-l1));
			if(str+i != p)
			{
				p=str+i;
			}
			memmove(p+l2,p+l1,strlen(p+l1)+1);
			strncpy(p,s2,l2);
		}
		else if(l2<l1)
		{
			memmove(p+l2,p+l1,strlen(p+l1)+1);
			str=realloc(str,strlen(str)+1);
			strncpy(p,s2,l2);
		}
		else
			strncpy(p,s2,l2);
		p=p+l2;
	}
	return str;
}
int main(int argc,char *argv[])
{
	char *buf = NULL;
	if(argc != 4)
	{
		printf("incorrect inputs\n");
		exit(0);
	}
	buf = readFromFile(argv[1]);
//	printf("%s\n",buf);
        buf = repAllOfSubStrWithNewStr(buf,argv[2],argv[3]);
        writeToFile(buf,argv[1]);
	printf("%s\n",buf);
	return 0;
}


void writeToFile(char *buf,char *filename)
{
  FILE *fp;
  fp=fopen(filename,"w");

  fwrite(buf,strlen(buf),1,fp);
  fclose(fp);
}

char *readFromFile(char *filename)
{
	FILE *fp;
	char *p = NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s file is not present\n",filename);
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
