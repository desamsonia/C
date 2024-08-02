#include<stdio.h>
int asciToInt(char str)
{
 int i,n=0,a;
for(i=0;str[i];i++)
{
  str[i]=str[i] - 48;
  n=n*10+str[i];
  }
 return n;
 } 
int main()
{
char str[10];
printf("Enter string:");
scanf("%s",str);
int n = asciToInt(str);
printf("%d\n",n);
printf("%d\n",sizeof(n));
return 0;
 } 
