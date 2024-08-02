#include<stdio.h>
#include<string.h>
int nonrep(char *str,char a)
{
int i,j;
for(i=0;i<=strlen(str)-1;i++)
{
  if(str[i] != a)
  {
    return a; 
  }
  return 0;
}
str[j] = '\0';
}
int main()
{
char str[20],ch;
fgets(str,20,stdin);
int i;
for(i=0;i<=strlen(str)-1;i++)
{
 if(ch=nonrep(str,str[i]));
    printf("%c",ch);
}
//printf("%c",ch);
}
