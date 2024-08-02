#include<stdio.h>
#include<string.h>
int main()
{
char str[100],sub[10],*p;
char *f=NULL;
gets(str);
gets(sub);
p=str;
int len=strlen(sub);
while(p=strstr(p,sub))
{
f=p;
p++;
}
if(f)
{
memmove(f,f+len,strlen(f+len) +1);
}

printf("%s\n",str);
return 0;
}
