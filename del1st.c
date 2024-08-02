#include<stdio.h>
#include<string.h>
int main()
{
char str[100],sub[10],*p;
gets(str);
gets(sub);
int len=strlen(sub);
if(p=strstr(str,sub))
{
memmove(p,p+len,strlen(p+len) +1);
}
printf("%s\n",str);
return 0;
}




