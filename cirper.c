// circular permutation 
#include<stdio.h>
#include<string.h>

void rotateRight(char *str)
{
int l = strlen(str)-1;
int i;
char lst = str[l];
for(i=l;i>=0;i--)
{
  str[i]=str[i-1];
  }
  str[0] = lst;
  }
  
int cirper(const char *s,char *sub)
{
int l = strlen(sub)-1;
int i;
for(i=0;i<l;i++)
{
  rotateRight(sub);
 if(strcmp(s,sub) == 0)
 {
 return 1;
 }
 }
 return 0;
 }

int main()
{
char str[20],sub[20],t[10];
gets(str);
gets(sub);
if(cirper(str,sub) )
printf("Yes\n");
else
printf("NO\n");
}
 
 
