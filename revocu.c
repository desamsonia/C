/* reverse all occurence of substring in given string */
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
  printf("1_%s\n",p);
  for(i=0,j=len;sub[i];i++,j--)
   {
     p[j] = sub[i];
     }
  printf("2_%s\n",p);
     p++;
  printf("3_%s\n",p);   
}
printf("%s\n",str);
return 0;
} 
