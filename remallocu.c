/* remove all occurence of given substrings in given string */
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],sub[10],*p;
gets(str);
scanf("%[^\n]s",sub);
int len=strlen(sub);
while(p=strstr(str,sub))
{

  memmove(p,p+len,strlen(p+len) +1);

  }
  printf("%s\n",str);
  return 0;
}  
