#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cnt;

void strRev2(char str[],int s,int e);
void reverse_letters(char *str);

void *readFromFile(char *filename);
void *reverseLines(char (*line)[100]);
void strRev(char *str);
void writeTofile(char (*line)[100],char *filename);

int main(int argc,char *argv[])
{
	if(argc != 3)
	{
	   printf("incorrect inputs\n");
	   exit(0);
	}

	char (*lines)[100] = NULL;

	lines=readFromFile(argv[1]);
	lines=reverseLines(lines);
	writeTofile(lines,argv[2]);
}

void *readFromFile(char *filename)
{
	char (*line)[100] = NULL;
	FILE *fp;
	char str[100];
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("file not found\n");
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		line = realloc(line,(cnt+1)*100);
		strcpy(line[cnt],str);
		printf("%s\n",line[cnt]);
		cnt++;
	}
	fclose(fp);
	return line;
}

void *reverseLines(char (*line)[100])
{
  int i;
  printf("%s\n",line[0]);

  for(i=0;i<cnt;i++)
  {
   strRev(line[i]);
   printf("revstr =%s",line[i]);
   reverse_letters(line[i]);
   printf("string = %s",line[i]);
  }
   return line;
}

void strRev(char *st)
{
int i,j,len;
   char ch;

   j = len = strlen(st) - 1;
   i = 0;

   while(i < j) {
      ch = st[j];
      st[j] = st[i];
      st[i] = ch;
      i++;
      j--;
   }
}
void writeTofile(char (*line)[100],char *filename)
{
 FILE *fp;
int i;
fp=fopen(filename,"w");
for(i=0;i<cnt;i++)
	fputs(line[i],fp);
fclose(fp);
}

void reverse_letters(char *str)
{
    
 int i,j,l;
 i=0,l=strlen(str)-1;
 for(i=j=0; j<l;j++)
 {
	 if(str[j]==' ')
		 continue;
	 i=j;
	 while(str[j] != ' ' && j<=l)
		 j++;
	 j--;
	 strRev2(str,i,j);
 }
}

void strRev2(char str[],int s,int e)
{
	char ch; 
       while(s <= e)
      {
      ch = str[s];
      str[s] = str[e];
      str[e] = ch;
      s++;
      e--;
       }
}







