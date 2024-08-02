#include<stdio.h>
#include<string.h>
int main()
{
char str[100],sub[10],*p;
gets(str);
gets(sub);
int i,j,len=strlen(sub) - 1;
while(p=strstr(str,sub))
{
  for(i=0;sub[i];i++)
   {
     p[i] ='*';
     }
     p++;
}
printf("%s\n",str);
return 0;
} 
